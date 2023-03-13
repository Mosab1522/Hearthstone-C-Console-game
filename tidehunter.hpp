#include "gameObject.hpp"
#include <cmath>

#ifndef TIDEHUNTER_HPP
#define TIDEHUNTER_HPP

class Tidehunter : public GameObject
{
public:

    Tidehunter() : GameObject(x, y, 2,2,1,0,false,false,'B',"Tidehunter",0) {}
    ~Tidehunter() {}
};

#endif
