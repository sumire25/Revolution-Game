//
// Created by natzgun on 12/06/23.
//

#include "Invoker.h"

void Invoker::setCommand(Command *_command) {
  this->ptr_comando_concreto = _command;
}

void Invoker::executeCommand() {
  ptr_comando_concreto->execute();
}
