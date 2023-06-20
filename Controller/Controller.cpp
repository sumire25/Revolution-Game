#include "Controller.h"
#include <iostream>
namespace Ctlr {
  Controller::Controller(Mdl::Model &_modelo, Vw::View &_vista) : modelo(_modelo), vista(_vista) {

  }

  void Controller::procesarEvento(const sf::Event &evento) {
    switch (evento.type) {
      case sf::Event::Closed:
        vista.ventana.close();
        break;
      case sf::Event::KeyPressed:
        if (evento.key.code == sf::Keyboard::W) {
          std::cout << "Tecla W presionada" << std::endl;
          vista.dibujar();
        } else if (evento.key.code == sf::Keyboard::A) {
          std::cout << "Tecla A presionada" << std::endl;
          // Lógica cuando se presiona la tecla A
        } else if (evento.key.code == sf::Keyboard::S) {
          std::cout << "Tecla S presionada" << std::endl;
          // Lógica cuando se presiona la tecla S
        } else if (evento.key.code == sf::Keyboard::D) {
          std::cout << "Tecla D presionada" << std::endl;
          // Lógica cuando se presiona la tecla D
        }
        break;
    }
  }

  void Controller::actualizar() {

  }
}
