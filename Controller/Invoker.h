//
// Created by natzgun on 12/06/23.
//

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
