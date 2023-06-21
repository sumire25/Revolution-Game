#include "View.h"

namespace Vw {
  View::View() : ventanaAbierta(false), sePresionoBoton(false) {
    gameWindow.create(sf::VideoMode(800, 600), "Ventana SFML");
    ventanaAbierta = true;
  }
  void View::dibujar() {

  }

  void View::ejecutar() {
    while (ventanaAbierta) {
      // Procesar eventos de la ventana de SFML
      sf::Event evento;
      while (gameWindow.pollEvent(evento)) {
        if (evento.type == sf::Event::Closed) {
          cerrarVentana();
        } else if (evento.type == sf::Event::KeyPressed) {
          manejarEventoTeclado(evento);
        }
      }

      // Actualizar la vista según el estado del modelo
      // ...

      // Dibujar la esfera en la posición actual
      // ...

      gameWindow.display();
    }

  }

  void View::actualizarVista() {
    // Actualizar la vista según el estado del modelo
    // ...

    // Dibujar la esfera en la posición actual
    // ...

    gameWindow.display();
  }

  void View::cerrarVentana() {
    ventanaAbierta = false;
    gameWindow.close();
  }

  void View::manejarEventoTeclado(sf::Event evento) {
    // Manejar eventos de teclado
    // ...
  }

  sf::RenderWindow& View::obtenerVentana() {
    return gameWindow;
  }

};
