#include "Virologist.hpp"

namespace pandemic{

    Virologist::Virologist(Board& b, City c) : Player(b,c){
            name = "Virologist";
        }

    string Virologist::role(){
        return name;
    }

    Player& Virologist::treat(City c){
            if(b.cities[c].level == 0){
                throw "You can not treat when level is 0";
            }
            if(!cards.contains(c) && (this->location!=c)){
                throw "You do not have the card";
            }
            if(c!=this->location){
                if(b.cures.contains(b.cities[c].color)){
                    if(cards.contains(c)){
                        cards.erase(c);
                        b.cities[c].level = 0;
                    }  
                }
                else{
                    if(cards.contains(c)){
                        cards.erase(c);
                        b.cities[c].level = b.cities[c].level-1;
                    }
                }
            }
            else{
                if(b.cures.contains(b.cities[c].color)){
                b.cities[c].level = 0;
                }
                else{
                b.cities[c].level = b.cities[c].level-1;
                }
            }
        return *this;
    }
}