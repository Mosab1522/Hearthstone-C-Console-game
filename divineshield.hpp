#include "gameObject.hpp"
#include <cmath>

#ifndef DIVINESHIELD_HPP
#define DIVINESHIELD_HPP

class Divineshield : public GameObject
{
public:

    Divineshield() : GameObject(x, y,1,10,0,0,false,true,'T',"Divineshield",0) {}
    ~Divineshield() {}

};

#endif
