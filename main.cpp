#include <SFML/Graphics.hpp>
#include <iostream>
#include "Model/Model.h"
#include "View/View.h"
#include "Controller/Controller.h"

int main() {
  std::cout << "hello world from SFML" << std::endl;
  sf::RenderWindow gameWindow(sf::VideoMode(800, 600), "Mi Aplicación SFML");

  Mdl::Model modelo; // Instancia del modelo
  Vw::View vista(gameWindow); // Instancia de la vista, pasando la ventana como parámetro
  Ctlr::Controller controlador(modelo, vista); // Instancia del controlador, pasando el modelo y la vista como parámetros

  while (gameWindow.isOpen()) { //controlador est activo? extrae el booleano de vista
    sf::Event event;
    while (gameWindow.pollEvent(event)) {
      /*if (event.type == sf::Event::Closed) {
        gameWindow.close(); // Es un ejemmplo pero esto lo deberia manerar el controller
      }*/
      controlador.procesarEvento(event); // El controlador maneja los eventos y actualiza el modelo y la vista en consecuencia
    }
    gameWindow.clear();
    controlador.actualizar(); // El controlador actualiza el modelo y la vista en cada iteración
    vista.dibujar();
    gameWindow.display();// La vista dibuja los elementos en la ventana
  }

  return 0;
}
