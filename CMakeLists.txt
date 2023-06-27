cmake_minimum_required(VERSION 3.25)
project(Revolution_Game)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

# Variables para fuentes cpp y cabeceras
set(MODEL_SOURCES
        Model/Model.cpp Model/Model.h
        Model/Entidad.cpp Model/Entidad.h
        Model/Personaje.h Model/Jugador.cpp Model/Jugador.h Model/Esfera.cpp Model/Esfera.h)

set(VIEW_SOURCES
        View/View.cpp
        View/View.h
        View/Imagen.cpp View/Imagen.h)

set(CONTROLLER_SOURCES
        Controller/Controller.cpp
        Controller/Controller.h
        Controller/Invoker.cpp Controller/Invoker.h Controller/Command.cpp Controller/Command.h)

# Agregar ejecutable
add_executable(Revolution_Game
        main.cpp
        ${MODEL_SOURCES}
        ${VIEW_SOURCES}
        ${CONTROLLER_SOURCES}
        )

# Esta era la manera antigua pero lo guardamos por siacaso
# add_executable(Revolution_Game main.cpp Model/Model.cpp Model/Model.h View/View.cpp View/View.h Controller/Controller.cpp Controller/Controller.h)
target_link_libraries(Revolution_Game
        sfml-system
        sfml-window
        sfml-graphics
        sfml-audio
        sfml-network
        )