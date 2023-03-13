#include "gameObject.hpp"
#include <cmath>

#ifndef SALVA_HPP
#define SALVA_HPP

class Salva : public GameObject
{
public:

    Salva() : GameObject(x, y,3,4,0,0,false,false,'T',"Salva",2) {}
    ~Salva() {}

};

#endif
