#include "gameObject.hpp"
#include <cmath>

#ifndef BREWMASTER_HPP
#define BREWMASTER_HPP

class Brewmaster : public GameObject
{
public:

    Brewmaster() : GameObject(x, y, 2,3,2,0,false,false,'B',"Brewmaster",0) {}
    ~Brewmaster() {}
};

#endif
