#include "gameObject.hpp"
#include <cmath>

#ifndef SCALEBANE_HPP
#define SCALEBANE_HPP

class Scalebane : public GameObject
{
public:

    Scalebane() : GameObject(x, y, 5,5,5,0,false,false,'B',"Scalebane",0) {}
    ~Scalebane() {}
};

#endif
