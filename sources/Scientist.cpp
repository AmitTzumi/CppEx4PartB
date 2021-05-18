#include "Scientist.hpp"

namespace pandemic{

    Scientist::Scientist(Board& b, City c, int level) : Player(b,c){
            name = "Scientist";
            param = level;
        }

    string Scientist::role(){
        return name;
    }

    Player& Scientist::discover_cure(Color c){
            if(b.cures.contains(c)){
                return *this;
            }
            if(!b.research_stations.contains(this->location)){
                throw "You have to be in a research station to discover cure";
            }
            int count =0;
            for(auto itr = cards.begin(); itr != cards.end(); ++itr){
                if(b.cities[*itr].color == c){
                    count++;
                }
            }
            int counter1 = 0;
            if(count >= param){
                unordered_set <City> temp = this->cards;
                for (City city: temp)
                {
                    if(b.cities[city].color == c)
                    {
                        this->cards.erase(city);
                        counter1++;
                    }
                    if(counter1==param)
                    {
                        b.cures.insert(c);
                        break;
                    }
                }
            }
            else{
                throw "There is not enough cards in this color";
                }
        return *this;
    }
}