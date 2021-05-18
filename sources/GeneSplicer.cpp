#include "GeneSplicer.hpp"

namespace pandemic{
    constexpr int numInColor = 5;

    GeneSplicer::GeneSplicer(Board& b, City c) : Player(b,c){
        name = "GeneSplicer";
    }

    string GeneSplicer::role(){
        return name;
    }

    Player& GeneSplicer::discover_cure(Color c){
            if(b.cures.contains(c)){
                return *this;
            }
            if(!b.research_stations.contains(this->location)){
                throw "You have to be in a research station to discover cure";
            }
            int count =0;
            for(auto itr = cards.begin(); itr != cards.end(); ++itr){ // can change it to size instead of counting the cards.
                count++;
            }
            if(count >= numInColor){
                count =0;
                for(auto itr = cards.begin(); itr != cards.end(); ++itr){
                        cards.erase(*itr);
                        count++;
                        if(count == numInColor){
                            b.cures.insert(c);
                            break;
                        }
                    }
                }
            else{
                throw "There is not enough cards to discover_cure";
                }
        return *this;
    }



}