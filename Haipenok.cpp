//
// Created by User on 16.11.2020.
//

#include "Haipenok.h"
Haipenok::Haipenok(std::string l_SpecialAttack, std::string l_SpecialDefence){
    m_SpecialAttack=l_SpecialAttack;
    m_SpecialDefence=l_SpecialDefence;
}

void Haipenok::setSpecialAttack(std::string l_SpecialAttack) {
    m_SpecialAttack=l_SpecialAttack;
}
void Haipenok::setSpecialDefence(std::string l_SpecialDefence) {
    m_SpecialDefence=l_SpecialDefence;
}