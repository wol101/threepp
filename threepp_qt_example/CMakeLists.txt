cmake_minimum_required(VERSION 3.5)

project(threepp_qt_example VERSION 0.1 LANGUAGES CXX C)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS OpenGL)
find_package(Qt6 REQUIRED COMPONENTS OpenGLWidgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui

        ../src/threepp/cameras/Camera.cpp
        ../src/threepp/cameras/PerspectiveCamera.cpp
        ../src/threepp/cameras/OrthographicCamera.cpp

        ../src/threepp/controls/FlyControls.cpp
        ../src/threepp/controls/OrbitControls.cpp

        ../src/threepp/core/BufferGeometry.cpp
        ../src/threepp/core/Clock.cpp
        ../src/threepp/core/EventDispatcher.cpp
        ../src/threepp/core/Layers.cpp
        ../src/threepp/core/Object3D.cpp
        ../src/threepp/core/Raycaster.cpp
        ../src/threepp/core/Uniform.cpp

        ../src/threepp/extras/ShapeUtils.cpp
        ../src/threepp/extras/core/Curve.cpp
        ../src/threepp/extras/core/CurvePath.cpp
        ../src/threepp/extras/core/Font.cpp
        ../src/threepp/extras/core/Path.cpp
        ../src/threepp/extras/core/Shape.cpp
        ../src/threepp/extras/core/ShapePath.cpp
        ../src/threepp/extras/curves/CatmullRomCurve3.cpp
        ../src/threepp/extras/curves/CubicBezierCurve.cpp
        ../src/threepp/extras/curves/CubicBezierCurve3.cpp
        ../src/threepp/extras/curves/EllipseCurve.cpp
        ../src/threepp/extras/curves/LineCurve.cpp
        ../src/threepp/extras/curves/QuadraticBezierCurve.cpp
        ../src/threepp/extras/curves/QuadraticBezierCurve3.cpp
        ../src/threepp/extras/curves/SplineCurve.cpp

        ../src/threepp/geometries/BoxGeometry.cpp
        ../src/threepp/geometries/CapsuleGeometry.cpp
        ../src/threepp/geometries/CircleGeometry.cpp
        ../src/threepp/geometries/ConeGeometry.cpp
        ../src/threepp/geometries/ConvexGeometry.cpp
        ../src/threepp/geometries/CylinderGeometry.cpp
        ../src/threepp/geometries/DecalGeometry.cpp
        ../src/threepp/geometries/EdgesGeometry.cpp
        ../src/threepp/geometries/ExtrudeGeometry.cpp
        ../src/threepp/geometries/IcosahedronGeometry.cpp
        ../src/threepp/geometries/LatheGeometry.cpp
        ../src/threepp/geometries/OctahedronGeometry.cpp
        ../src/threepp/geometries/PlaneGeometry.cpp
        ../src/threepp/geometries/PolyhedronGeometry.cpp
        ../src/threepp/geometries/RingGeometry.cpp
        ../src/threepp/geometries/ShapeGeometry.cpp
        ../src/threepp/geometries/SphereGeometry.cpp
        ../src/threepp/geometries/TextGeometry.cpp
        ../src/threepp/geometries/TorusGeometry.cpp
        ../src/threepp/geometries/TorusKnotGeometry.cpp
        ../src/threepp/geometries/TubeGeometry.cpp
        ../src/threepp/geometries/WireframeGeometry.cpp

        ../src/threepp/helpers/ArrowHelper.cpp
        ../src/threepp/helpers/AxesHelper.cpp
        ../src/threepp/helpers/Box3Helper.cpp
        ../src/threepp/helpers/BoxHelper.cpp
        ../src/threepp/helpers/CameraHelper.cpp
        ../src/threepp/helpers/DirectionalLightHelper.cpp
        ../src/threepp/helpers/GridHelper.cpp
        ../src/threepp/helpers/HemisphereLightHelper.cpp
        ../src/threepp/helpers/PlaneHelper.cpp
        ../src/threepp/helpers/PointLightHelper.cpp
        ../src/threepp/helpers/PolarGridHelper.cpp
        ../src/threepp/helpers/SkeletonHelper.cpp
        ../src/threepp/helpers/SpotLightHelper.cpp

        ../src/threepp/input/PeripheralsEventSource.cpp

        ../src/threepp/loaders/FontLoader.cpp
        ../src/threepp/loaders/ImageLoader.cpp
        ../src/threepp/loaders/MTLLoader.cpp
        ../src/threepp/loaders/OBJLoader.cpp
        ../src/threepp/loaders/STLLoader.cpp
        ../src/threepp/loaders/TextureLoader.cpp

        ../src/threepp/materials/LineBasicMaterial.cpp
        ../src/threepp/materials/Material.cpp
        ../src/threepp/materials/MeshBasicMaterial.cpp
        ../src/threepp/materials/MeshLambertMaterial.cpp
        ../src/threepp/materials/MeshNormalMaterial.cpp
        ../src/threepp/materials/MeshPhongMaterial.cpp
        ../src/threepp/materials/MeshStandardMaterial.cpp
        ../src/threepp/materials/PointsMaterial.cpp
        ../src/threepp/materials/RawShaderMaterial.cpp
        ../src/threepp/materials/ShaderMaterial.cpp
        ../src/threepp/materials/SpriteMaterial.cpp

        ../src/threepp/math/Box2.cpp
        ../src/threepp/math/Box3.cpp
        ../src/threepp/math/Capsule.cpp
        ../src/threepp/math/Color.cpp
        ../src/threepp/math/Cylindrical.cpp
        ../src/threepp/math/Euler.cpp
        ../src/threepp/math/Frustum.cpp
        ../src/threepp/math/ImprovedNoise.cpp
        ../src/threepp/math/Line3.cpp
        ../src/threepp/math/MathUtils.cpp
        ../src/threepp/math/Matrix3.cpp
        ../src/threepp/math/Matrix4.cpp
        ../src/threepp/math/Plane.cpp
        ../src/threepp/math/Ray.cpp
        ../src/threepp/math/Sphere.cpp
        ../src/threepp/math/Spherical.cpp
        ../src/threepp/math/SphericalHarmonics3.cpp
        ../src/threepp/math/Triangle.cpp
        ../src/threepp/math/Vector2.cpp
        ../src/threepp/math/Vector3.cpp
        ../src/threepp/math/Vector4.cpp
        ../src/threepp/math/Quaternion.cpp

        ../src/threepp/lights/AmbientLight.cpp
        ../src/threepp/lights/DirectionalLight.cpp
        ../src/threepp/lights/HemisphereLight.cpp
        ../src/threepp/lights/Light.cpp
        ../src/threepp/lights/LightShadow.cpp
        ../src/threepp/lights/PointLight.cpp
        ../src/threepp/lights/PointLightShadow.cpp
        ../src/threepp/lights/SpotLight.cpp
        ../src/threepp/lights/SpotLightShadow.cpp

        ../src/threepp/scenes/Scene.cpp
        ../src/threepp/scenes/Fog.cpp
        ../src/threepp/scenes/FogExp2.cpp

        ../src/threepp/objects/Group.cpp
        ../src/threepp/objects/HUD.cpp
        ../src/threepp/objects/Line.cpp
        ../src/threepp/objects/LineLoop.cpp
        ../src/threepp/objects/LineSegments.cpp
        ../src/threepp/objects/LOD.cpp
        ../src/threepp/objects/InstancedMesh.cpp
        ../src/threepp/objects/Mesh.cpp
        ../src/threepp/objects/ObjectWithMaterials.cpp
        ../src/threepp/objects/ParticleSystem.cpp
        ../src/threepp/objects/Points.cpp
        ../src/threepp/objects/Skeleton.cpp
        ../src/threepp/objects/SkinnedMesh.cpp
        ../src/threepp/objects/Sky.cpp
        ../src/threepp/objects/Sprite.cpp
        ../src/threepp/objects/Reflector.cpp
        ../src/threepp/objects/Water.cpp

        ../src/threepp/textures/Texture.cpp
        ../src/threepp/textures/DataTexture3D.cpp

        ../src/threepp/utils/BufferGeometryUtils.cpp
        ../src/threepp/utils/StringUtils.cpp

        ../src/threepp/renderers/GLRenderer.cpp
        ../src/threepp/renderers/GLRenderTarget.cpp

        ../src/threepp/renderers/gl/GLAttributes.cpp
        ../src/threepp/renderers/gl/GLBackground.cpp
        ../src/threepp/renderers/gl/GLBindingStates.cpp
        ../src/threepp/renderers/gl/GLBufferRenderer.cpp
        ../src/threepp/renderers/gl/GLClipping.cpp
        ../src/threepp/renderers/gl/GLCubeMaps.cpp
        ../src/threepp/renderers/gl/GLGeometries.cpp
        ../src/threepp/renderers/gl/GLInfo.cpp
        ../src/threepp/renderers/gl/GLLights.cpp
        ../src/threepp/renderers/gl/GLObjects.cpp
        ../src/threepp/renderers/gl/GLProgram.cpp
        ../src/threepp/renderers/gl/GLPrograms.cpp
        ../src/threepp/renderers/gl/GLMaterials.cpp
        ../src/threepp/renderers/gl/GLRenderLists.cpp
        ../src/threepp/renderers/gl/GLRenderStates.cpp
        ../src/threepp/renderers/gl/GLShadowMap.cpp
        ../src/threepp/renderers/gl/GLState.cpp
        ../src/threepp/renderers/gl/GLTextures.cpp
        ../src/threepp/renderers/gl/GLUniforms.cpp
        ../src/threepp/renderers/gl/ProgramParameters.cpp

        ../src/threepp/renderers/shaders/ShaderLib.cpp

        ../src/external/glad/glad.c
        ../src/threepp/utils/LoadGlad.cpp

        generated/threepp/EmbeddedFonts.cpp
        generated//threepp/renderers/shaders/ShaderChunk.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(threepp_qt_example
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        openglwidget.h openglwidget.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET threepp_qt_example APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(threepp_qt_example SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(threepp_qt_example
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_include_directories(threepp_qt_example PRIVATE
    ../include
    ../src
    ../src/external/quickhull/
    ../src/external/glad
    ../src/external/nlohmann
    ../src/external/stb
)

target_link_libraries(threepp_qt_example PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(threepp_qt_example PRIVATE Qt6::OpenGL)
target_link_libraries(threepp_qt_example PRIVATE Qt6::OpenGLWidgets)


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.threepp_qt_example)
endif()
set_target_properties(threepp_qt_example PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS threepp_qt_example
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(threepp_qt_example)
endif()
