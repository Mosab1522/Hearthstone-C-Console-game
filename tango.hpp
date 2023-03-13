#include "gameObject.hpp"
#include <cmath>

#ifndef TANGO_HPP
#define TANGO_HPP

class Tango : public GameObject
{
public:

    Tango() : GameObject(x, y,1,2,0,0,false,false,'T',"Tango",2) {}
    ~Tango() {}

};

#endif
