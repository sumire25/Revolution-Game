
#ifndef REVOLUTION_GAME_JUGADORVIEW_H
#define REVOLUTION_GAME_JUGADORVIEW_H

#include <SFML/Graphics.hpp>
#include <iostream>
using std::string;

class JugadorView {
  int numFrames;
  float frameTime;
  int currentFrame;
  sf::Clock clock;
  std::vector<sf::Texture> frames;
  sf::Sprite sprite;
public:
  JugadorView(int, float);
  void updateA();
  sf::Sprite &getSprite();
};


#endif //REVOLUTION_GAME_JUGADORVIEW_H
