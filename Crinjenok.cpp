#include "Crinjenok.h"
Crinjenok::Crinjenok(std::string l_SpecialAttack, std::string l_SpecialDefence){
    m_SpecialAttack=l_SpecialAttack;
    m_SpecialDefence=l_SpecialDefence;
}

void Crinjenok::setSpecialAttack(std::string l_SpecialAttack) {
    m_SpecialAttack=l_SpecialAttack;
}
void Crinjenok::setSpecialDefence(std::string l_SpecialDefence) {
    m_SpecialDefence=l_SpecialDefence;
}