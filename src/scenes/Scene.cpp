#include "Scene.h"
#include "renderer/BVH.h"
#include "renderer/QBVH.h"

namespace SimpleRenderer {

Scene::~Scene() {
  for (size_t i=0; i<m_objects.size(); i++) {
    SceneObjectInfo &info = m_objects.at(i);
    if (info.doDelete) {
      delete info.object;
    }
  }
  for (size_t i=0; i<m_models.size(); i++) {
    ModelObjectInfo &info = m_models.at(i);
    if (info.doDelete) {
      delete info.model;
    }
  }
  delete m_bvh;
  delete m_qbvh;
}

void Scene::ConstructBVH()
{
  if (m_bvh) delete m_bvh;

  m_bvh = new BVH();
  //m_bvh->Construct(BVH::CONSTRUCTION_OBJECT_SAH, m_inBVHObjects);
  m_bvh->Construct(BVH::CONSTRUCTION_OBJECT_MEDIAN, m_inBVHObjects);
}

void Scene::ConstructQBVH()
{
  if (m_qbvh) delete m_qbvh;

  m_qbvh = new QBVH();
  m_qbvh->Construct(m_inBVHObjects);
}

bool Scene::CheckIntersection(const Ray &ray, IntersectionInformation &info) const {
  info.hit.distance = INF;
  info.object = NULL;

  if (m_qbvh) {
    m_qbvh->CheckIntersection(ray, info);
  } else if (m_bvh) {
    m_bvh->CheckIntersection(ray, info);
  } else {
    std::vector<SceneObject *>::const_iterator it,end = m_inBVHObjects.end();
    for (it = m_inBVHObjects.begin(); it!=end; it++) {
      SceneObject *obj = *it;
      HitInformation hit;
      if (obj->CheckIntersection(ray, hit)) {
        if (info.hit.distance > hit.distance) {
          info.hit = hit;
          info.object = obj;
        }
      }
    }
  }

  std::vector<SceneObject *>::const_iterator it,end = m_notInBVHObjects.end();
  for (it = m_notInBVHObjects.begin(); it!=end; it++) {
    SceneObject *obj = *it;
    HitInformation hit;
    if (obj->CheckIntersection(ray, hit)) {
      if (info.hit.distance > hit.distance) {
        info.hit = hit;
        info.object = obj;
      }
    }
  }
  return info.hit.distance != INF;
}

}
