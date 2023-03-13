#include "gameObject.hpp"
#include <cmath>

#ifndef MURLOC_HPP
#define MURLOC_HPP

class Murloc : public GameObject
{
public:

    Murloc() : GameObject(x, y, 0,1,1,0,false,false,'B',"Murloc",0) {}
    ~Murloc() {}
};

#endif
