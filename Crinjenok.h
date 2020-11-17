#ifndef UNTITLED_CRINJENOK_H
#define UNTITLED_CRINJENOK_H
#include <string>
#include "Pokemon.h"

class Crinjenok : private Pokemon{
private:
    std::string m_SpecialAttack;
    std::string m_SpecialDefence;



public:
    Crinjenok(std::string l_SpecialAttack, std::string l_SpecialDefence);

void setSpecialAttack (std::string l_SpecialAttack);
void setSpecialDefence (std::string l_SpecialDefence);

    std::string getSpecialAttack(){return m_SpecialAttack;};
    std::string getSpecialDefence(){return m_SpecialDefence;};

};


#endif //UNTITLED_CRINJENOK_H
