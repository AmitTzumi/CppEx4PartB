#include "OperationsExpert.hpp"

namespace pandemic{


    OperationsExpert::OperationsExpert(Board& b, City c) : Player(b,c)
    {   
        name = "OperationsExpert";
    }

    string OperationsExpert::role(){
        return name;
    }

    Player& OperationsExpert::build() {
            cout << "build() override OperationsExpert" << endl;
            if (!b.research_stations.contains(this->location)) {
                b.research_stations.insert(this->location);
            }
            return *this;
    }
}