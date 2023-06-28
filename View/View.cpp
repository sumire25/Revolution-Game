#include "View.h"

namespace Vw {


  View::View() {
    int fps = 60;
    window.create(sf::VideoMode(1280, 720), "Ventana SFML");
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
    //sphere.setOrigin(x, y);
    sphere.move(x,y);
    sphere.setFillColor(sf::Color::White);
    window.draw(sphere);
  }

    sf::Event& View::getEvent() {
        return evento;
    }

    bool View::getVentanaPollEvent() {
        return window.pollEvent(getEvent());
    }

  void View::getCloseWindow() {
    window.close();
  }

  bool View::getKeyboard_W() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::W);
  }

  bool View::getKeyboard_A() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
  }

  bool View::getKeyboard_S() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::S);
  }

  bool View::getKeyboard_D() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::D);
  }
};
