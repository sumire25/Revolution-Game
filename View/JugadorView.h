
#ifndef REVOLUTION_GAME_JUGADORVIEW_H
#define REVOLUTION_GAME_JUGADORVIEW_H

#include <SFML/Graphics.hpp>
#include <iostream>
using std::string;

class JugadorView: public sf::Drawable {
  int numFrames;
  float frameTime;
  int currentFrame;
  sf::Clock clock;
  std::vector<sf::Texture> frames;
  sf::Sprite sprite;
public:
  JugadorView(int, float);
  void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
  void updateA();
  sf::Sprite &getSprite();
};


#endif //REVOLUTION_GAME_JUGADORVIEW_H
