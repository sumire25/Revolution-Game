#ifndef MVC_ARCHITECTURE_SFML_VIEW_H
#define MVC_ARCHITECTURE_SFML_VIEW_H

// Archivo View.h
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

namespace Vw {
  class View {
  private:
    sf::RenderWindow window;
    sf::Event evento;
    int fps;
  public:
    View();
    bool isRunning();
    // No se deben llamarse gets
    sf::Event& getEvent();
    bool getVentanaPollEvent();
    void getCloseWindow();
    void getDisplay();
    void getClear();
    void actualizarVista();
    bool getEventTypeClose();
    // Keyboard functions
    bool getKeyboard_W();
    bool getKeyboard_A();
    bool getKeyboard_S();
    bool getKeyboard_D();
    void drawEsfera(int,int,int);

  };
}

#endif //MVC_ARCHITECTURE_SFML_VIEW_H
