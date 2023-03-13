#include "gameObject.hpp"
#include <cmath>

#ifndef CREEPER_HPP
#define CREEPER_HPP

class Creeper : public GameObject
{
public:

    Creeper() : GameObject(x, y,3,5,1,0,false,true,'T',"Creeper",0) {}
    ~Creeper() {}

};

#endif
