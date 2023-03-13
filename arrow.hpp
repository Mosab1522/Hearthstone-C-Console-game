#include "gameObject.hpp"
#include <cmath>

#ifndef ARROW_HPP
#define ARROW_HPP

class Arrow : public GameObject
{
public:

    Arrow() : GameObject(x, y,2,0,2,0,false,false,'F',"Arrow",1) {}
    ~Arrow() {}

};

#endif
