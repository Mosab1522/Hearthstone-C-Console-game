#include "gameObject.hpp"
#include <cmath>

#ifndef YETI_HPP
#define YETI_HPP

class Yeti : public GameObject
{
public:

    Yeti() : GameObject(x, y, 4,5,4,0,false,false,'B',"Yeti",0) {}
    ~Yeti() {}
};

#endif
