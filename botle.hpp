#include "gameObject.hpp"
#include <cmath>

#ifndef BOTLE_HPP
#define BOTLE_HPP

class Botle : public GameObject
{
public:

    Botle() : GameObject(x, y,2,3,0,0,false,false,'T',"Botle",2) {}
    ~Botle() {}

};

#endif
