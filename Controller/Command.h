#ifndef REVOLUTION_GAME_COMMAND_H
#define REVOLUTION_GAME_COMMAND_H


class Command {
public:
  virtual void execute() const = 0;
  virtual ~Command() = default;
};


#endif //REVOLUTION_GAME_COMMAND_H
