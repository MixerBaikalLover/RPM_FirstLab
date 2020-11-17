#ifndef UNTITLED_POKEMON_H
#define UNTITLED_POKEMON_H
#include <string>

class Pokemon {
private:

    std::string m_pokeName;
    int m_hp;
    int m_attack;
    int m_defence;
    int m_speed;

public: Pokemon();
         Pokemon(std::string l_pokeName, int l_hp, int l_attack, int l_defence, int l_speed);


    void  setPokeName(std::string l_pokeName);
    void setHp(int l_hp);
    void setAttack(int l_attack);
    void setDefence(int l_defence);
    void setSpeed(int l_speed);

    std::string getPokeName() {return m_pokeName;};
    int getHp(){return m_hp;};
    int getAttack(){return m_attack;};
    int getDefence(){return m_defence;};
    int getSpeed(){return m_speed;};

};


#endif //UNTITLED_POKEMON_H
