#include "Menu.h"

Menu::Menu() {
  //initMenu();
}

Menu::~Menu() {
  music.stop();
}

void Menu::initMenu() {
  std::cout << "Error..." << std::endl;
  if (!music.openFromFile("../Resources/amazonico.ogg"))
    throw std::runtime_error("No se pudo cargar la musica");
  std::cout << "Salio Error..." << std::endl;
  //music.setVolume(100);
  //music.setVolume(music.getVolume() / 2);
  music.play();

}

sf::Sprite &Menu::getSprite() {
  return backgroundSprite;
}

void Menu::setBackground() {
  if (!backgroundTexture.loadFromFile("../Resources/wallMenu2.jpg"))
  {
    // Error al cargar la imagen de fondo
    throw std::runtime_error("No se pudo cargar la imagen");
  }
  backgroundSprite.setTexture(backgroundTexture);
}
