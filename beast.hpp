#include "gameObject.hpp"
#include <cmath>

#ifndef BEAST_HPP
#define BEAST_HPP

class Beast : public GameObject
{
public:

    Beast() : GameObject(x, y, 2,2,2,0,false,false,'B',"Beast",0) {}
    ~Beast() {}
};

#endif
