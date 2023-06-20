#ifndef MVC_ARCHITECTURE_SFML_VIEW_H
#define MVC_ARCHITECTURE_SFML_VIEW_H

// Archivo View.h
#pragma once
#include <SFML/Graphics.hpp>
#include "../Model/Jugador.h"

namespace Vw {
  class View {
  public:
    sf::RenderWindow &ventana; // Referencia a la ventana de SFML
    // Otros atributos y datos de la vista
    //crear la ventana es aqui

  public:
    View(sf::RenderWindow &ventana);

    // void ejecutar();
    // void procesarEventos();
    void dibujar(); // Método para dibujar elementos en la ventana
    void ejecutar();
    // Otros métodos y funciones relacionados con la representación visual
  };
}

#endif //MVC_ARCHITECTURE_SFML_VIEW_H
