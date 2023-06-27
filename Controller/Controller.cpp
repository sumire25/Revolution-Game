#include "Controller.h"
#include <iostream>
namespace Ctlr {

  Controller::Controller() {
  }

  void Controller::ejecutar() {
      int y = 300;
    while(vista.isRunning()) {
      // std::cout << "Running" << std::endl;
      // vista.actualizarVista();
        vista.getClear();
      while(vista.getVentana())
        switch (vista.getEvent().type) {
          case sf::Event::Closed:
              break;
          case sf::Event::KeyPressed:
              if (vista.getEvent().key.code == sf::Keyboard::W) {

                  y -= 10;
                  vista.drawEsfera(50,(400-100) * (-1),(y-100) * (-1));
                  std::cout << "Tecla W presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::A) {
                  std::cout << "Tecla A presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::S) {
                  std::cout << "Tecla S presionada" << std::endl;
              } else if (vista.getEvent().key.code == sf::Keyboard::D) {
                  std::cout << "Tecla D presionada" << std::endl;
              }
              break;
        }

      vista.drawEsfera(50,(400-100) * (-1),(y-100) * (-1));
      vista.getDisplay();
    }
  }
}
