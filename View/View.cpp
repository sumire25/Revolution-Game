#include "View.h"

namespace Vw {
  View::View(sf::RenderWindow &_ventana) : ventana(_ventana) {

  }

  /* void View::ejecutar() {
    while(ventana.isOpen()) {
      sf::Event event;
      while(ventana.pollEvent(event)) {
        procesarEventos(event);
      }
    }
  } */

  /* void View::procesarEventos(const sf::Event& evento) {
    controlador.procesarEvento(event);
  }*/

  void View::dibujar() {
    // Como ejemplo crea un circulo
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(0.f, 0.f);
    ventana.draw(shape);
  }

};
