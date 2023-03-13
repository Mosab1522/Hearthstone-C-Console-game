#include <algorithm>

#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

class GameObject
{
protected:
    friend class Player;
    friend class Environment;
    int x, y, cost,health,damage, numberinGames;

    bool alreadyAttack, isTaunt;
    char symbol;
    std::string name;
    int typeofSpell;

public:
    GameObject(int x, int y, int cost,int health,int damage, int numberinGames,bool alreadyAttack,bool isTaunt, char symbol, std::string name,int typeofSpell) : x(x), y(y), cost(cost),health(health),damage(damage),numberinGames(numberinGames),alreadyAttack(alreadyAttack),isTaunt(isTaunt), symbol(symbol),name(name),typeofSpell(typeofSpell) {}
    ~GameObject() {}

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }
    int getCost()
    {
        return this->cost;
    }
    int getTypeofSpell()
    {
        return this->typeofSpell;
    }

    char getSymbol()
    {
        return this->symbol;
    }
    std::string getName()
    {
        return this->name;
    }

    void move(int x, int y)
    {

        this->x = x;
        this->y = y;
    }
    int getHealth()
    {
        return this->health;
    }
    int getDamage()
    {
        return this->damage;
    }

    int getNumberGames()
    {
        return this->numberinGames;
    }

    bool getAlreadyAttack()
    {
        return this->alreadyAttack;
    }

    bool getisTaunt()
    {
        return this->isTaunt;
    }

};

#endif
