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
      while (vista.getVentanaPollEvent()) {
        switch (vista.getEvent().type) {
          case sf::Event::Closed:
            vista.getCloseWindow();
            break;
        }
      }
      if (vista.getKeyboard_W()) {
        y -= 5;
        vista.drawEsfera(50, x* (-1), y * (-1));
        std::cout << "Tecla W presionada" << std::endl;
      }
      if (vista.getKeyboard_A()) {
        x -= 5;
        vista.drawEsfera(50, x * (-1), y * (-1));
        std::cout << "Tecla A presionada" << std::endl;
      }
      if (vista.getKeyboard_S()) {
        y += 5;
        vista.drawEsfera(50, x * (-1), y  * (-1));
        std::cout << "Tecla S presionada" << std::endl;
      }
      if (vista.getKeyboard_D()) {
        x += 5;
        vista.drawEsfera(50, x * (-1), y * (-1));
        std::cout << "Tecla D presionada" << std::endl;
      }

      vista.drawEsfera(50, x * (-1), y * (-1));
      vista.getDisplay();
    }
  }

}
