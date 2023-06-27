#include "View.h"

namespace Vw {


  View::View() {
    int fps = 60;
    window.create(sf::VideoMode(800, 600), "Ventana SFML");
    window.setFramerateLimit(fps);
  }

  bool View::isRunning() {
    return window.isOpen();
  }

  void View::getClear() {
    window.clear();
  }
  void View::getDisplay() {
    window.display();
  }

  void View::actualizarVista() {

  }



  void View::drawEsfera(int radio, int x, int y) {
    sf::CircleShape sphere(50.f);
    sphere.setOrigin(x, y);
    sphere.setFillColor(sf::Color::White);
    window.draw(sphere);
  }

    sf::Event& View::getEvent() {
        return evento;
    }

    bool View::getVentana() {
        return window.pollEvent(getEvent());
    }
};
