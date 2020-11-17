#include "Pokemon.h"
Pokemon::Pokemon() {}
Pokemon::Pokemon(std::string l_pokeName, int l_hp, int l_attack, int l_defence, int l_speed) {
    m_pokeName=l_pokeName;
    m_hp=l_hp;
    m_attack=l_attack;
    m_defence=l_defence;
    m_speed=l_speed;
}




void Pokemon::setPokeName(std::string l_pokeName) {
    m_pokeName=l_pokeName;
}
void Pokemon::setHp(int l_hp) {
    m_hp=l_hp;
}
void Pokemon::setAttack(int l_attack) {
    m_attack=l_attack;
}
void Pokemon::setDefence(int l_defence) {
    m_defence=l_defence;
}
void Pokemon::setSpeed(int l_speed) {
    m_speed=l_speed;
}