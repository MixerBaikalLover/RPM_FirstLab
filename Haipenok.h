#ifndef UNTITLED_HAIPENOK_H
#define UNTITLED_HAIPENOK_H
#include <string>
#include "Pokemon.h"

class Haipenok : private Pokemon {
private:
    std::string m_SpecialAttack;
    std::string m_SpecialDefence;

public:
    Haipenok(std::string l_SpecialAttack, std::string l_SpecialDefence);
    void setSpecialAttack (std::string l_SpecialAttack);
    void setSpecialDefence (std::string l_SpecialDefence);

    std::string getSpecialAttack(){return m_SpecialAttack;};
    std::string getSpecialDefence(){return m_SpecialDefence;};
};


#endif //UNTITLED_HAIPENOK_H
