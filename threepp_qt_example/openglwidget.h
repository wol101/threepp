#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include "threepp/threepp.hpp"

#include <QOpenGLWidget>

class openglwidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit openglwidget(QWidget *parent = nullptr);

protected:
    virtual void initializeGL() Q_DECL_OVERRIDE;
    virtual void paintGL() Q_DECL_OVERRIDE;
    virtual void resizeGL(int width, int height) Q_DECL_OVERRIDE;

private:
    std::unique_ptr<threepp::GLRenderer> m_renderer;
    std::shared_ptr<threepp::Scene> m_scene;
    std::shared_ptr<threepp::PerspectiveCamera> m_camera;
    std::shared_ptr<threepp::OrbitControls> m_orbitControls;
};

#endif // OPENGLWIDGET_H
