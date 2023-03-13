
#include "gameObject.hpp"
#include "multiset.hpp"
#include "hero.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
private:
    friend class Environment;
    int mana;
    std::string name;
    int actualMana;
    bool start;

    int moves,taunts;


    bool usedSpell;
public:
    Player(int mana,std::string name):mana(mana),name(name),start(start),moves(moves),taunts(0),usedSpell(false) {}
    ~Player() {}

    Hero* hero;
    Multiset * cards=new Multiset;
    GameObject* ID0=NULL;
    GameObject* ID1=NULL;
    GameObject* ID2=NULL;
    GameObject* ID3=NULL;
    GameObject* ID4=NULL;
    GameObject* ID5=NULL;
    GameObject* ID6=NULL;
    GameObject* ID7=NULL;
    GameObject* ID8=NULL;
    GameObject* ID9=NULL;

    int getMana()
    {
        return this->mana;
    }
    int getactualMana()
    {
        return this->actualMana;
    }
    std::string getName()
    {
        return this->name;
    }
    bool getStart()
    {
        return this->start;
    }
    bool getusedSpell()
    {
        return this->usedSpell;
    }
    int getMoves()
    {
        return this->moves;
    }
    int getTaunts()
    {
        return this->taunts;
    }

    int findFreeIndex()
    {

        if (this->ID0 == NULL)
            return 0;
        else if (this->ID1 == NULL)
            return 1;
        else if (this->ID2 == NULL)
            return 2;
        else if (this->ID3 == NULL)
            return 3;
        else if (this->ID4 == NULL)
            return 4;
        else if (this->ID5 == NULL)
            return 5;
        else if (this->ID6 == NULL)
            return 6;
        else if (this->ID7 == NULL)
            return 7;
        else if (this->ID8 == NULL)
            return 8;
        else if (this->ID9 == NULL)
            return 9;
        else
            return -1;
    }

    void playCard(int x,int y)
    {
        if(this->cards->ms[x]!=NULL&&this->cards->ms[x]->getTypeofSpell()==0)
        {
            if(this->actualMana>=this->cards->ms[x]->getCost())
            {


                this->actualMana=this->actualMana-this->cards->ms[x]->getCost();

                int ID=findFreeIndex();


                if(ID==-1)
                {
                    std::cout<<"Nemas volne miesto v poli."<<std::endl;
                }

                if((ID==0)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID0=this->cards->getItem(x);
                    this->ID0->move(ID,y);
                }
                if((ID==1)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID1=this->cards->getItem(x);
                    this->ID1->move(ID,y);
                }
                if((ID==2)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID2=this->cards->getItem(x);
                    this->ID2->move(ID,y);
                }
                if((ID==3)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID3=this->cards->getItem(x);
                    this->ID3->move(ID,y);
                }
                if((ID==4)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID4=this->cards->getItem(x);
                    this->ID4->move(ID,y);
                }
                if((ID==5)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID5=this->cards->getItem(x);
                    this->ID5->move(ID,y);
                }
                if((ID==6)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID6=this->cards->getItem(x);
                    this->ID6->move(ID,y);
                }
                if((ID==7)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID7=this->cards->getItem(x);
                    this->ID7->move(ID,y);
                }
                if((ID==8)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID8=this->cards->getItem(x);
                    this->ID8->move(ID,y);
                }
                if((ID==9)&&(this->cards->ms[x]!=NULL))
                {
                    this->ID9=this->cards->getItem(x);
                    this->ID9->move(ID,y);
                }
            }
            else
                std::cout<<"Nemas dostatok many."<<std::endl;
        }
        else if(this->cards->ms[x]!=NULL&&(this->cards->ms[x]->getTypeofSpell()==1||this->cards->ms[x]->getTypeofSpell()==2))
        {
            this->actualMana=this->actualMana-this->cards->ms[x]->getCost();
            this->cards->MULTISET_remove(x);
        }
        else std::cout<<"Nemas na tomto miesto kartu."<<std::endl;

    }


    void attack(int x, int y)
    {
        if(x==0)
        {
            if(this->ID0->getHealth()>y)
            {
                this->ID0->health=this->ID0->getHealth()-y;
            }
            else
            {
                if(this->ID0->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID0=NULL;
            }

        }

        if(x==1)
        {
            if(this->ID1->getHealth()>y)
            {
                this->ID1->health=this->ID1->getHealth()-y;
            }
            else
            {
                if(this->ID1->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID1=NULL;
            }

        }
        if(x==2)
        {
            if(this->ID2->getHealth()>y)
            {
                this->ID2->health=this->ID2->getHealth()-y;
            }
            else
            {
                if(this->ID2->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID2=NULL;
            }

        }
        if(x==3)
        {
            if(this->ID3->getHealth()>y)
            {
                this->ID3->health=this->ID3->getHealth()-y;
            }
            else
            {
                if(this->ID3->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID3=NULL;
            }

        }
        if(x==4)
        {
            if(this->ID4->getHealth()>y)
            {
                this->ID4->health=this->ID4->getHealth()-y;
            }
            else
            {
                if(this->ID4->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID4=NULL;
            }

        }
        if(x==5)
        {
            if(this->ID5->getHealth()>y)
            {
                this->ID5->health=this->ID5->getHealth()-y;
            }
            else
            {
                if(this->ID5->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID5=NULL;
            }

        }
        if(x==6)
        {
            if(this->ID6->getHealth()>y)
            {
                this->ID6->health=this->ID6->getHealth()-y;
            }
            else
            {
                if(this->ID6->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID6=NULL;
            }

        }
        if(x==7)
        {
            if(this->ID7->getHealth()>y)
            {
                this->ID7->health=this->ID7->getHealth()-y;
            }
            else
            {
                if(this->ID7->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID7=NULL;
            }

        }
        if(x==8)
        {
            if(this->ID8->getHealth()>y)
            {
                this->ID8->health=this->ID8->getHealth()-y;
            }
            else
            {
                if(this->ID8->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID8=NULL;
            }

        }
        if(x==9)
        {
            if(this->ID9->getHealth()>y)
            {
                this->ID9->health=this->ID9->getHealth()-y;
            }
            else
            {
                if(this->ID9->getisTaunt()==true)
                {
                    this->taunts=this->getTaunts()-1;
                }
                this->ID9=NULL;
            }

        }
        if(x==10)
        {
            if(this->hero->getHealth()>y)
            {
                this->hero->health=this->hero->getHealth()-y;
            }
            else
            {
                delete this->hero;
                this->hero=NULL;
                std::cout<<std::endl<<std::endl<<"Koniec hry.: ";
            }
        }
    }
    void heal(int x, int y)
    {
        if(x==0)
        {

            this->ID0->health=this->ID0->getHealth()+y;


        }

        if(x==1)
        {

            this->ID1->health=this->ID1->getHealth()+y;


        }
        if(x==2)
        {

            this->ID2->health=this->ID2->getHealth()+y;


        }
        if(x==3)
        {

            this->ID3->health=this->ID3->getHealth()+y;


        }
        if(x==4)
        {

            this->ID4->health=this->ID4->getHealth()+y;


        }
        if(x==5)
        {

            this->ID5->health=this->ID5->getHealth()+y;


        }
        if(x==6)
        {

            this->ID6->health=this->ID6->getHealth()+y;


        }
        if(x==7)
        {

            this->ID7->health=this->ID7->getHealth()+y;


        }
        if(x==8)
        {

            this->ID8->health=this->ID8->getHealth()+y;


        }
        if(x==9)
        {

            this->ID9->health=this->ID9->getHealth()+y;



        }
        if(x==10)
        {

            this->hero->health=this->hero->getHealth()+y;



        }

    }


    /*int getX()
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
    int getNumber()
    {
        return this->number;
    }
    char getSymbol()
    {
        return this->symbol;
    }
    std::string getName()
    {
        return this->name;
    }

    GameObject* setGameobject(GameObject* game)
    {
        return this->gameobject=game;
    }

    GameObject* getGameobject()
    {
        return this->gameobject;
    }

     void move(int x, int y) {

                this->x = x;
                this->y = y;
        }
    */
};

#endif
