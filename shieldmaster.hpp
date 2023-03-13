#include "gameObject.hpp"
#include <cmath>

#ifndef SHIELDMASTER_HPP
#define SHIELDMASTER_HPP

class Shieldmaster : public GameObject
{
public:

    Shieldmaster() : GameObject(x, y,4,5,3,0,false,true,'T',"Shieldmaster",0) {}
    ~Shieldmaster() {}

};

#endif
