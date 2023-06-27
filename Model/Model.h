#ifndef MVC_ARCHITECTURE_SFML_MODEL_H
#define MVC_ARCHITECTURE_SFML_MODEL_H

// Archivo Model.h
#pragma once
#include "Esfera.h"

namespace Mdl {
  class Model {
  public:
    Esfera* esferita = new Esfera(0,0);
    Model();

  };
};

#endif //MVC_ARCHITECTURE_SFML_MODEL_H
