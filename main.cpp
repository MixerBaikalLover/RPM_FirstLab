#include <iostream>
#include <fstream>
#include "Pokemon.h"
#include "Eskerenok.h"
#include "Haipenok.h"
#include "Crinjenok.h"
int main()
{

   Pokemon eskerenok("Eskerenok",2000,50,60,30);
   Pokemon crinjenok("Crinjenok",1200,120,40,80);
   Pokemon haipenok("Haipenok",1500,70,50,50);
   Eskerenok eskerenoks("Esketit", "TankySphere");
   Crinjenok crinjenoks("Crinj","Dodge");
   Haipenok haipenoks("Hype","Puncture");
std::ofstream out;
out.open("output.json");
    out << "{" << std::endl;

    out << "     \"pokemons\": [" << std::endl;
    out << "      {"<< std::endl;
    out << "           \"Name\":  " << " \"" << eskerenok.getPokeName() ;
    out << "\"" << ","<<std::endl;
    out << "           \"HP\":  " << eskerenok.getHp() ;
    out << ","<<std::endl;
    out << "           \"Attack\":  " << eskerenok.getAttack() ;
    out << ","<<std::endl;
    out << "           \"Defence\":  " << eskerenok.getDefence() ;
    out << ","<<std::endl;
    out << "           \"Speed\":  " << eskerenok.getSpeed() ;
    out << ","<<std::endl;
    out << "           \"Special Attack\":  "<< " \"" << eskerenoks.getSpecialAttack() ;
    out <<"\"" << ","<<std::endl;
    out << "           \"Special Defence\":  "<< " \"" << eskerenoks.getSpecialDefence() ;
    out <<"\"" << ","<<std::endl;
    out << "      },"<< std::endl;

    out << "      {"<< std::endl;
    out << "           \"Name\":  " << " \"" << haipenok.getPokeName() ;
    out << "\"" << ","<<std::endl;
    out << "           \"HP\":  " << haipenok.getHp() ;
    out << ","<<std::endl;
    out << "           \"Attack\":  " << haipenok.getAttack() ;
    out << ","<<std::endl;
    out << "           \"Defence\":  " << haipenok.getDefence() ;
    out << ","<<std::endl;
    out << "           \"Speed\":  " << haipenok.getSpeed() ;
    out << ","<<std::endl;
    out << "           \"Special Attack\":  "<< " \"" << haipenoks.getSpecialAttack() ;
    out <<"\"" << ","<<std::endl;
    out << "           \"Special Defence\":  "<< " \"" << haipenoks.getSpecialDefence() ;
    out <<"\"" << ","<<std::endl;
    out << "      },"<< std::endl;

    out << "      {"<< std::endl;
    out << "           \"Name\":  " << " \"" << crinjenok.getPokeName() ;
    out << "\"" << ","<<std::endl;
    out << "           \"HP\":  " << crinjenok.getHp() ;
    out << ","<<std::endl;
    out << "           \"Attack\":  " << crinjenok.getAttack() ;
    out << ","<<std::endl;
    out << "           \"Defence\":  " << crinjenok.getDefence() ;
    out << ","<<std::endl;
    out << "           \"Speed\":  " << crinjenok.getSpeed() ;
    out << ","<<std::endl;
    out << "           \"Special Attack\":  "<< " \"" << crinjenoks.getSpecialAttack() ;
    out <<"\"" << ","<<std::endl;
    out << "           \"Special Defence\":  "<< " \"" << crinjenoks.getSpecialDefence() ;
    out <<"\"" << ","<<std::endl;
    out << "      }"<< std::endl;
    out << "    ]"<< std::endl;

    out << "}";

out.close();
return 0;
}