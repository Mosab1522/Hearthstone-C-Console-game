#include "gameObject.hpp"
#include <cmath>

#ifndef ALPHA_HPP
#define ALPHA_HPP

class Alpha : public GameObject
{
public:

    Alpha() : GameObject(x, y, 2,2,2,0,false,false,'B',"Alpha",0) {}
    ~Alpha() {}
};

#endif
