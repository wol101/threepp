#include "openglwidget.h"


auto createBox() {

    const auto boxGeometry = threepp::BoxGeometry::create();
    const auto boxMaterial = threepp::MeshBasicMaterial::create();
    boxMaterial->color.setRGB(1, 0, 0);
    boxMaterial->transparent = true;
    boxMaterial->opacity = 0.1f;
    auto box = threepp::Mesh::create(boxGeometry, boxMaterial);

    auto wiredBox = threepp::LineSegments::create(threepp::WireframeGeometry::create(*boxGeometry));
    wiredBox->material()->as<threepp::LineBasicMaterial>()->depthTest = false;
    wiredBox->material()->as<threepp::LineBasicMaterial>()->color = threepp::Color::gray;
    box->add(wiredBox);

    return box;
}

auto createSphere() {

    const auto sphereGeometry = threepp::SphereGeometry::create(0.5f);
    const auto sphereMaterial = threepp::MeshBasicMaterial::create();
    sphereMaterial->color.setHex(0x00ff00);
    sphereMaterial->wireframe = true;
    auto sphere = threepp::Mesh::create(sphereGeometry, sphereMaterial);
    sphere->position.setX(-1);

    return sphere;
}

auto createPlane() {

    const auto planeGeometry = threepp::PlaneGeometry::create(5, 5);
    const auto planeMaterial = threepp::MeshBasicMaterial::create();
    planeMaterial->color.setHex(threepp::Color::yellow);
    planeMaterial->transparent = true;
    planeMaterial->opacity = 0.5f;
    planeMaterial->side = threepp::Side::Double;
    auto plane = threepp::Mesh::create(planeGeometry, planeMaterial);
    plane->position.setZ(-2);

    return plane;
}


openglwidget::openglwidget(QWidget *parent)
    : QOpenGLWidget{parent}
{
}

void openglwidget::initializeGL()
{
    m_renderer = std::make_unique<threepp::GLRenderer>(threepp::WindowSize(width(), height()));

    m_scene = threepp::Scene::create();
    m_camera = threepp::PerspectiveCamera::create(75, float(width()) / float(height()), 0.1f, 100.0f);

    m_scene->background = threepp::Color::aliceblue;
    m_camera->position.z = 5;
    auto box = createBox();
    m_scene->add(box);

    auto sphere = createSphere();
    box->add(sphere);

    auto plane = createPlane();
    m_scene->add(plane);
}



void openglwidget::paintGL()
{
    m_renderer->render(*m_scene, *m_camera);
}

void openglwidget::resizeGL(int width, int height)
{
    threepp::WindowSize windowSize(width, height);
    m_camera->aspect = windowSize.aspect();
    m_camera->updateProjectionMatrix();
    m_renderer->setSize(windowSize);
}

