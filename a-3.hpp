#include "gameObject.hpp"
#include <cmath>

#ifndef A3_HPP
#define A3_HPP

class A3 : public GameObject
{
public:

    A3() : GameObject(x, y, 3,4,3,0,false,false,'B',"A-3",0) {}
    ~A3() {}
};

#endif
