#include "Controller.h"
#include <iostream>

namespace Ctlr {

  Controller::Controller() {
  }

  void Controller::ejecutar() {
    int y = 0;
    int x = 0;
    while (vista.isRunning()) {
      // std::cout << "Running" << std::endl;
      // vista.actualizarVista();
      vista.getClear();
      while (vista.getVentana()) {
        switch (vista.getEvent().type) {
          case sf::Event::Closed:
            vista.getCloseWindow();
            break;
            /*case sf::Event::KeyPressed:
              if (vista.getEvent().key.code == sf::Keyboard::W) {
                y -= 10;
                vista.drawEsfera(50, (x - 100) * (-1), (y - 100) * (-1));
                std::cout << "Tecla W presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::A) {
                x -= 10;
                vista.drawEsfera(50, (x - 100) * (-1), (y - 100) * (-1));
                std::cout << "Tecla A presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::S) {
                y += 10;
                vista.drawEsfera(50, (x - 100) * (-1), (y - 100) * (-1));
                std::cout << "Tecla S presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::D) {
                x += 10;
                vista.drawEsfera(50, (x - 100) * (-1), (y - 100) * (-1));
                std::cout << "Tecla D presionada" << std::endl;
              }
              break;*/
        }
      }
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        y -= 5;
        vista.drawEsfera(50, x* (-1), y * (-1));
        std::cout << "Tecla W presionada" << std::endl;
      }
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        x -= 5;
        vista.drawEsfera(50, x * (-1), y * (-1));
        std::cout << "Tecla A presionada" << std::endl;
      }
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        y += 5;
        vista.drawEsfera(50, x * (-1), y  * (-1));
        std::cout << "Tecla S presionada" << std::endl;
      }
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        x += 5;
        vista.drawEsfera(50, x * (-1), y * (-1));
        std::cout << "Tecla D presionada" << std::endl;
      }

      vista.drawEsfera(50, x * (-1), y * (-1));
      vista.getDisplay();
    }
  }

}
