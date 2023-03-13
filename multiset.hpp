#include <iostream>
#if defined _WIN32
#include <windows.h>
#endif

#ifndef MULTISET_INCLUDE
#define MULTISET_INCLUDE


#define MULTISET_zeroItem  NULL

class Multiset
{
private:
    friend class Player;
    friend class Environment;
    ItemType ms[10];
public:
    Multiset()
    {
        for (int i = 0; i < 10; i++)
            this->ms[i] = NULL;
    }

    ~Multiset()
    {

    }
#if defined _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
#endif


    int MULTISET_findIndex(ItemType item)
    {
        for (int i = 0; i < 10; i++)
            if (this->ms[i] == item)
                return i;

        return -1;  // chybovy signal ak neexistuje
    }

    ItemType getItem(int x)
    {

        ItemType Card=this->ms[x];
        delete this->ms[x];
        this->ms[x]=NULL;
        return Card;

    }
    int MULTISET_put( ItemType item)
    {
        int i = MULTISET_findIndex( NULL);
        this->ms[i] = item;


        return 0;
    }

    void MULTISET_remove(int index)
    {
        this->ms[index] = MULTISET_zeroItem;
    }

    void MULTISET_print()
    {
        std::cout << "Tvoje karty na ruke: ";
        for (int i = 0; i < 10; i++)
        {
            if (this->ms[i] != MULTISET_zeroItem)
            {
                if(this->ms[i]->getisTaunt()==false&&this->ms[i]->getTypeofSpell()==0)
                {
                    std::cout <<"|"<<i<<"=|M:"<<this->ms[i]->getCost()<<" "<< this->ms[i]->getName()<<" D:"<<this->ms[i]->getDamage()<<"-H:"<<this->ms[i]->getHealth()<<"| ";

                }
                if(this->ms[i]->getisTaunt()==true&&this->ms[i]->getTypeofSpell()==0)
                {
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 14);
#endif
                    std::cout <<"|"<<i<<"=|M:"<<this->ms[i]->getCost()<<" "<< this->ms[i]->getName()<<" D:"<<this->ms[i]->getDamage()<<"-H:"<<this->ms[i]->getHealth()<<"| ";
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 7);
#endif
                }

                if(this->ms[i]->getTypeofSpell()==1)
                {
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 12);
#endif
                    std::cout <<"|"<<i<<"=|M:"<<this->ms[i]->getCost()<<" "<< this->ms[i]->getName()<<"-Spell"<<" D:"<<this->ms[i]->getDamage()<<"| ";
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 7);
#endif
                }
                if(this->ms[i]->getTypeofSpell()==2)
                {
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 10);
#endif
                    std::cout <<"|"<<i<<"=|M:"<<this->ms[i]->getCost()<<" "<< this->ms[i]->getName()<<"-Spell"<<" H:"<<this->ms[i]->getHealth()<<"| ";
#if defined _WIN32
                    SetConsoleTextAttribute(hConsole, 7);
#endif
                }
            }


        }
        std::cout << std::endl;
    }


};





#endif
