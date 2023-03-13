#include "gameObject.hpp"
#include <cmath>

#ifndef ARCHER_HPP
#define ARCHER_HPP

class Archer : public GameObject
{
public:

    Archer() : GameObject(x, y, 1,2,1,0,false,false,'B',"Archer",0) {}
    ~Archer() {}
};

#endif
