#include <iostream>
#include <torus.h>
#include <QGuiApplication>
#include <Qt3DExtras/Qt3DWindow>
#include <Qt3DRender/QCamera>
#include <Qt3DExtras/QTorusMesh>
#include <Qt3DExtras>
#include <Qt3DExtras/QPhongMaterial>
#include <Qt3DCore/QTransform>
#include <Qt3DCore>
#include <string>
#include <fstream>
using namespace std;


Qt3DCore::QEntity *ecreate_scene_torus()
{

    Qt3DCore::QEntity *result_entity = new Qt3DCore::QEntity;

    Torus tor;
    ifstream in("C:/Users/0-22/Desktop/PROJECT/storage/torus.txt", ios::in | ios::binary);
    if(in)
    {
        while(!in.eof())
        {
            in.read((char*)&tor, sizeof(tor));
        }

    }
    in.close();

    Qt3DExtras::QTorusMesh *torus_mesh = new Qt3DExtras::QTorusMesh(result_entity);
    torus_mesh->setRadius(tor.get_radius());
    torus_mesh->setMinorRadius(tor.get_distance());
    torus_mesh->setSlices(16);
    torus_mesh->setRings(64);
    Qt3DExtras::QPhongMaterial *torus_material = new Qt3DExtras::QPhongMaterial(result_entity);
    Qt3DCore::QTransform *torus_transform = new Qt3DCore::QTransform(result_entity);
    result_entity->addComponent(torus_mesh);
    result_entity->addComponent(torus_material);

    return result_entity;
}

Qt3DCore::QEntity *create_scene_ball()
{
    Qt3DCore::QEntity *result_entity = new Qt3DCore::QEntity;
    Ball ball;
    ifstream in("C:/Users/0-22/Desktop/PROJECT/storage/ball.txt", ios::in | ios::binary);
    if(in)
    {
        while(!in.eof())
        {
            in.read((char*)&ball, sizeof(ball));
        }

    }

    Qt3DExtras::QSphereMesh *sphere_mesh = new Qt3DExtras::QSphereMesh(result_entity);
    sphere_mesh->setRadius(ball.get_radius());
    sphere_mesh->setRings(64);
    sphere_mesh->setSlices(16);
    Qt3DExtras::QPhongMaterial *ball_material = new Qt3DExtras::QPhongMaterial(result_entity);
    Qt3DCore::QTransform *ball_transform = new Qt3DCore::QTransform(result_entity);
    result_entity->addComponent(sphere_mesh);
    result_entity->addComponent(ball_material);

    return result_entity;
}

Qt3DCore::QEntity *create_scene_cylinder()
{
    Qt3DCore::QEntity *result_entity = new Qt3DCore::QEntity;
    Cylinder cylinder;
    ifstream in("C:/Users/0-22/Desktop/PROJECT/storage/cylinder.txt", ios::in | ios::binary);
    if(in)
    {
        while(!in.eof())
        {
            in.read((char*)&cylinder, sizeof(cylinder));
        }
    Qt3DExtras::QCylinderMesh *cylinder_mesh = new Qt3DExtras::QCylinderMesh(result_entity);
    cylinder_mesh->setLength(cylinder.get_length());
    cylinder_mesh->setRadius(cylinder.get_radius());
    cylinder_mesh->setSlices(16);
    cylinder_mesh->setRings(64);
    Qt3DExtras::QPhongMaterial *cylinder_material = new Qt3DExtras::QPhongMaterial(result_entity);
    Qt3DCore::QTransform *cylinder_transform = new Qt3DCore::QTransform(result_entity);
    result_entity->addComponent(cylinder_mesh);
    result_entity->addComponent(cylinder_material);
    result_entity->addComponent(cylinder_transform);

    return result_entity;
}


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ifstream in ("C:/Users/0-22/Desktop/PROJECT/storage/item.txt");
    string line;
    getline(in, line);
    int item = stoi(line);
    in.close();

    Qt3DExtras::Qt3DWindow view;

    Qt3DCore::QEntity *root_entity;
    Torus tor;
    switch(item)
    {
    case 1: root_entity = create_scene_torus(); break;
    case 2: root_entity = create_scene_ball(); break;
    case 3: root_entity = create_scene_cylinder(); break;
    case 4: root_entity = create_scene_cone(); break;
    default: break;
    }

    Qt3DRender::QCamera *camera = view.camera();
    camera->lens()->setPerspectiveProjection(60.0f, (float)view.width()/ view.height(), 0.1f, 1000.0f);
    camera->setPosition(QVector3D(0.0f, 0.0f, 40.0f));
    camera->setViewCenter(QVector3D(0.0f, 0.0f, 0.0f));


    Qt3DExtras::QOrbitCameraController *camera_controller = new Qt3DExtras::QOrbitCameraController(root_entity);
    camera_controller->setCamera(camera);
    camera_controller->setLookSpeed(180.0f);
    camera_controller->setLinearSpeed(50.0f);
    view.setRootEntity(root_entity);
    view.show();

    return app.exec();
}
