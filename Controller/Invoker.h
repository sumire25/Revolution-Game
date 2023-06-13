#ifndef REVOLUTION_GAME_INVOKER_H
#define REVOLUTION_GAME_INVOKER_H


#include "Command.h"

class Invoker {
  private:
  Command *ptr_comando_concreto;
  public:
  void setCommand(Command * _command);
  void executeCommand();

};


#endif //REVOLUTION_GAME_INVOKER_H
