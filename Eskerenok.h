#ifndef UNTITLED_ESKERENOK_H
#define UNTITLED_ESKERENOK_H
#include <string>
#include "Pokemon.h"

class Eskerenok : private Pokemon{
private:
    std::string m_SpecialAttack;
    std::string m_SpecialDefence;

public:
    Eskerenok(std::string l_SpecialAttack, std::string l_SpecialDefence);
    void setSpecialAttack (std::string l_SpecialAttack);
    void setSpecialDefence (std::string l_SpecialDefence);

    std::string getSpecialAttack(){return m_SpecialAttack;};
    std::string getSpecialDefence(){return m_SpecialDefence;};
};


#endif //UNTITLED_ESKERENOK_H
