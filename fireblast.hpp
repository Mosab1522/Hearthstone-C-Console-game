#include "gameObject.hpp"
#include <cmath>

#ifndef FIREBLAST_HPP
#define FIREBLAST_HPP

class Fireblast : public GameObject
{
public:

    Fireblast() : GameObject(x, y,6,0,6,0,false,false,'F',"Fireblast",1) {}
    ~Fireblast() {}

};

#endif
