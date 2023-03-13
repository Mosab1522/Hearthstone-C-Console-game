#include "gameObject.hpp"
#include <cmath>

#ifndef STORMWATCHER_HPP
#define STORMWATCHER_HPP

class Stormwatcher : public GameObject
{
public:

    Stormwatcher() : GameObject(x, y,7,7,4,0,false,true,'T',"Stormwatcher",0) {}
    ~Stormwatcher() {}

};

#endif
