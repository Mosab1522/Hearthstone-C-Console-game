#include "gameObject.hpp"
#include <cmath>

#ifndef CURSE_HPP
#define CURSE_HPP

class Curse : public GameObject
{
public:

    Curse() : GameObject(x, y,4,0,4,0,false,false,'F',"Curse",1) {}
    ~Curse() {}

};

#endif
