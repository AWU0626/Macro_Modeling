#include <iostream>
#include <vector>
using namespace std;
using std::vector;

class CapitalBaseLine {
    // vectors for state variables
    private: 
        vector<double> aggregateCapital;
        vector<double> aggregateInvestment;
        vector<double> capitalShare;
        vector<double> laborShare;

    // getter methods for private vectors
    public: 
        vector<double> getAggregateCapital() { return aggregateCapital; }
        vector<double> getAggregateInvestment() { return aggregateInvestment; }
        vector<double> getCapitalShare() { return capitalShare; }
        vector<double> getLaborShare() { return laborShare; }

    CapitalBaseLine(int length) {
        for (int i = 0; i < length; i++) {
            aggregateCapital.push_back(i);
            aggregateInvestment.push_back(i);
        }
    }

    public: void calculateShareFactor() {
        for (unsigned int i = 0; i < aggregateInvestment.size(); i++) {
            double currPeriodShare = aggregateCapital[i] / aggregateInvestment[i];
            capitalShare.push_back(currPeriodShare);
        }
    }

    public: void printCapital() {
        vector<double> currCapital = this->getAggregateCapital();
        for (auto curr = currCapital.begin(); curr != currCapital.end(); curr++) {
            cout << *curr << endl;
        }
    }
    
};

int main(int argc, char *argv[]) {
    CapitalBaseLine cbl(10);
    cbl.printCapital();

}




