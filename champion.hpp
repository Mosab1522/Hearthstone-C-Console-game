#include "gameObject.hpp"
#include <cmath>

#ifndef CHAMPION_HPP
#define CHAMPION_HPP

class Champion : public GameObject
{
public:

    Champion() : GameObject(x, y, 7,7,7,0,false,false,'B',"Champion",0) {}
    ~Champion() {}
};

#endif
