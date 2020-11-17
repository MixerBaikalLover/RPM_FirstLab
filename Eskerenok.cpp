#include "Eskerenok.h"
    Eskerenok::Eskerenok(std::string l_SpecialAttack, std::string l_SpecialDefence) {
        m_SpecialAttack=l_SpecialAttack;
        m_SpecialDefence=l_SpecialDefence;
}

void Eskerenok::setSpecialAttack(std::string l_SpecialAttack) {
    m_SpecialAttack=l_SpecialAttack;
}
void Eskerenok::setSpecialDefence(std::string l_SpecialDefence) {
    m_SpecialDefence=l_SpecialDefence;
}

