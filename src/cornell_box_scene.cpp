
#include "cornell_box_scene.h"
#include "sphere.h"

CornellBoxScene::CornellBoxScene()
{
  addObject(new Sphere(1e5, Vector3( 1e5+1, 40.8, 81.6),  Color(), Color(0.75, 0.25, 0.25), SceneObject::REFLECTION_TYPE_LAMBERT));  // ��
  addObject(new Sphere(1e5, Vector3(-1e5+99, 40.8, 81.6), Color(), Color(0.25, 0.25, 0.75), SceneObject::REFLECTION_TYPE_LAMBERT));  // �E
  addObject(new Sphere(1e5, Vector3(50, 40.8,  1e5),      Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_LAMBERT));  // ��
  addObject(new Sphere(1e5, Vector3(50, 40.8, -1e250),    Color(), Color(), SceneObject::REFLECTION_TYPE_LAMBERT));                  // ��O
  //addObject(new Sphere(1e5, Vector3( 1e5+1, 40.8, 81.6),  Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_SPECULAR));  // ��
  //addObject(new Sphere(1e5, Vector3(-1e5+99, 40.8, 81.6), Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_SPECULAR));  // �E
  //addObject(new Sphere(1e5, Vector3(50, 40.8,  1e5),      Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_SPECULAR));  // ��
  //addObject(new Sphere(1e5, Vector3(50, 40.8, -1e250),    Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_SPECULAR));  // ��O
  addObject(new Sphere(1e5, Vector3(50,  1e5,      81.6), Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_LAMBERT));  // ��
  addObject(new Sphere(1e5, Vector3(50, -1e5+81.6, 81.6), Color(), Color(0.75, 0.75, 0.75), SceneObject::REFLECTION_TYPE_LAMBERT));  // ��

	addObject(new Sphere(20,Vector3(65, 20, 20),           Color(),      Color(0.25, 0.75, 0.25), SceneObject::REFLECTION_TYPE_LAMBERT));    // �΋�
  addObject(new Sphere(16.5,Vector3(27, 16.5, 47),       Color(),      Color(0.99, 0.99, 0.99), SceneObject::REFLECTION_TYPE_SPECULAR));   // ��
  addObject(new Sphere(16.5,Vector3(77, 16.5, 78),       Color(),      Color(0.99, 0.99, 0.99), SceneObject::REFLECTION_TYPE_REFRACTION)); // �K���X
	addObject(new Sphere(15.0,Vector3(50.0, 90.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(45.0, 83.0, 76.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(45.0, 83.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(45.0, 83.0, 86.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(45.0, 83.0, 79.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(45.0, 83.0, 84.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(50.0, 83.0, 76.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(50.0, 83.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(50.0, 83.0, 86.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(50.0, 83.0, 84.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(50.0, 83.0, 79.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(55.0, 83.0, 76.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(55.0, 83.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(55.0, 83.0, 86.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(55.0, 83.0, 79.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(55.0, 83.0, 84.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(47.5, 83.0, 76.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(47.5, 83.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(47.5, 83.0, 86.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(47.5, 83.0, 79.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(47.5, 83.0, 84.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(52.5, 83.0, 76.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(52.5, 83.0, 81.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(52.5, 83.0, 86.6),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(52.5, 83.0, 79.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
  //addObject(new Sphere(3.0,Vector3(52.5, 83.0, 84.1),   Color(36,36,36), Color(), SceneObject::REFLECTION_TYPE_LAMBERT             ));    // �Ɩ�
}

CornellBoxScene::~CornellBoxScene() {
  for (size_t i=0; i<m_objects.size(); i++) {
    delete m_objects[i];
  }
  m_objects.clear();
}
