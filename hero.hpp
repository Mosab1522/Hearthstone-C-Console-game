#include "gameObject.hpp"
#include <cmath>

#ifndef HERO_HPP
#define HERO_HPP

class Hero : public GameObject
{
public:

    Hero(int x,int y) : GameObject(x, y, cost,30,1,0,false,false,'H',"Hero",0) {}
    ~Hero() {}


};

#endif
