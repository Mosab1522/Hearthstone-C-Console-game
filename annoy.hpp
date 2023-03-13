#include "gameObject.hpp"
#include <cmath>

#ifndef ANNOY_HPP
#define ANNOY_HPP

class Annoy : public GameObject
{
public:

    Annoy() : GameObject(x, y,3,2,1,0,false,true,'T',"Annoy",0) {}
    ~Annoy() {}

};

#endif
