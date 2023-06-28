#include <iostream>
#include <QGuiApplication>
#include <Qt3DExtras/Qt3DWindow>
#include <Qt3DRender/QCamera>
#include <Qt3DExtras/QTorusMesh>
#include <Qt3DExtras>
#include <Qt3DExtras/QPhongMaterial>
#include <Qt3DCore/QTransform>
#include <Qt3DCore>
using namespace std;

Qt3DCore::QEntity *create_scene(short object);

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Qt3DExtras::Qt3DWindow view;

    Qt3DRender::QCamera *camera = view.camera();
    camera->lens()->setPerspectiveProjection(60.0f, (float)view.width()/ view.height(), 0.1f, 1000.0f);
    camera->setPosition(QVector3D(0.0f, 0.0f, 40.0f));
    camera->setViewCenter(QVector3D(0.0f, 0.0f, 0.0f));

    Qt3DCore::QEntity *root_entity = create_scene(object);


    Qt3DExtras::QOrbitCameraController *camera_controller = new Qt3DExtras::QOrbitCameraController(root_entity);
    camera_controller->setCamera(camera);
    camera_controller->setLookSpeed(180.0f);
    camera_controller->setLinearSpeed(50.0f);
    view.setRootEntity(root_entity);
    view.show();
    return app.exec();
}
Qt3DCore::QEntity *create_scene(short object, float r)
{
    Qt3DCore::QEntity *result_entity = new Qt3DCore::QEntity;
//    switch(object)
//    {
//    case 1:
        Torus t;
        t.set_radius()
        Qt3DExtras::QTorusMesh *torus_mesh = new Qt3DExtras::QTorusMesh(result_entity);
        getchar();
        torus_mesh->setRadius(r);
        torus_mesh->setMinorRadius(6.0f);
        torus_mesh->setSlices(16);
        torus_mesh->setRings(64);
        Qt3DExtras::QPhongMaterial *torus_material = new Qt3DExtras::QPhongMaterial(result_entity);
        Qt3DCore::QTransform *torus_transform = new Qt3DCore::QTransform(result_entity);
        result_entity->addComponent(torus_mesh);
        result_entity->addComponent(torus_material);
        result_entity->addComponent(torus_transform);
//        break;
//    case 2:
//        Qt3DExtras::QConeMesh *cone_mesh = new Qt3DExtras::QConeMesh(result_entity);
//        cone_mesh->setTopRadius()
//    }



    return result_entity;
}
