#include <SFML/Graphics.hpp>
#include <iostream>
#include "Model/Model.h"
#include "View/View.h"
#include "Controller/Controller.h"

int main() {
  std::cout << "hello world from SFML" << std::endl;
  //sf::RenderWindow gameWindow(sf::VideoMode(800, 600), "Mi Aplicación SFML");

  Mdl::Model modelo; // Instancia del modelo
  Vw::View vista; // Instancia de la vista, pasando la ventana como parámetro
  Ctlr::Controller controlador(&modelo, &vista); // Instancia del controlador, pasando el modelo y la vista como parámetros
  vista.ejecutar();

  return 0;
}
