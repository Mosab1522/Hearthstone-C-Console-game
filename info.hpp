#include <iostream>
#include "environment.hpp"

#ifndef HEROSPELL_INCLUDE
#define HEROSPELL_INCLUDE

void Info()
{
    std::cout<<"Backspace   -   Navrat do hry"<<std::endl<<"Toto su informacie o hre. ©Erik Pal 2022"<<std::endl<<std::endl<<"Tahova hra pre dvoch hracov ktory sa striedaju v tahoch. Protihrac by nemal pozerat do hry pocas tahu druheho hraca.\n Hra konci pri zabiti hrdinu. Kazda karta ma svoju cenu(M:) ktora sa odpocitava z hracovej many, damage (D:) a zdravie (H:).\n V hre je 21 kariet 4 druhov: B-basic(biele) - bez specialnej vlastnosti, T-taunt(zlte) - ktory ked je v hernom poli zabranuje utokom na ine karticky od protihraca,\n a karty ktore sa spotrebuju po pouziti - damage-spell(cervene) ktore sluzia ako priamy damage na protihraca a heal-spell(zelene) ktore sluzia na vyhealovanie vlastnych kariet v poli alebo hrdinu.";



}



#endif
