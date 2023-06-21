#ifndef MVC_ARCHITECTURE_SFML_VIEW_H
#define MVC_ARCHITECTURE_SFML_VIEW_H

// Archivo View.h
#pragma once
#include <SFML/Graphics.hpp>

namespace Vw {
  class View {
  private:
    sf::RenderWindow gameWindow; // Referencia a la ventana de SFML
    bool ventanaAbierta;
    bool sePresionoBoton;

    // Otros atributos y datos de la vista
    //crear la ventana es aqui

  public:
    View();

    // void procesarEventos();
    void ejecutar();
    void dibujar(); // Método para dibujar elementos en la ventana
    void actualizarVista();
    void cerrarVentana();
    // Otros métodos y funciones relacionados con la representación visual
    void manejarEventoTeclado(sf::Event evento);
    sf::RenderWindow &obtenerVentana();
  };
}

#endif //MVC_ARCHITECTURE_SFML_VIEW_H
