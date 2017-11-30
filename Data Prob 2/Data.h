
#ifndef DATA_H
#define DATA_H

#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

class Data {
    private:
        int freqAbs;

        double name,
              freqRel,
              freqRelPer,
              freqRelAc;

    public:
        void setName(double name) {
            this->name = name;
        }

        void setFreqAbs(int freqAbs) {
            this->freqAbs = freqAbs;
        }

        void setFreqRel(double freqRel) {
            this->freqRel = freqRel;
        }

        void setFreqRelPer(double freqRelPer) {
            this->freqRelPer = freqRelPer;
        }

        void setFreqRelAc(double freqRelAc) {
            this->freqRelAc = freqRelAc;
        }

        void calcFreqRel(int L) {
            for(int i = 0; i < L; i++)
                freqRel = (double) freqAbs/L;
        }

        void calcFreqRelPer(int L) {
            for(int i = 0; i < L; i++)
                freqRelPer = freqRel * 100;
        }
        
        void calcFreqRelAc(vector<Data> data, int pos) {
            if(!pos) {
                freqRelAc = freqRelPer;
                return;
            }
            
            freqRelAc = data[(pos-1)].getFreqRelAc() + freqRelPer;
        }

        double getName() {
            return name;
        }

        int getFreqAbs() {
            return freqAbs;
        }

        double getFreqRel() {
            return freqRel;
        }

        double getFreqRelPer() {
            return freqRelPer;
        }

        double getFreqRelAc() {
            return freqRelAc;
        }
        
        string stringTable(double intervalo) {
            stringstream name,
                         freqAbs,
                         freqRel,
                         freqRelPer,
                         freqRelAc;
            
            name       << setw(3) << this->name << " - " << this->name + intervalo;
            freqAbs    << setw(3) << this->freqAbs;
            freqRel    << setw(3) << fixed << setprecision(3) << this->freqRel;
            freqRelPer << setw(5) << fixed << setprecision(2) << this->freqRelPer;
            freqRelAc  << setw(5) << fixed << setprecision(2) << this->freqRelAc;
                
            return "   "
                   + name.str()       + "           "
                   + freqAbs.str()    + "         "
                   + freqRel.str()    + "         "
                   + freqRelPer.str() + "           "
                   + freqRelAc.str()  + "       ";
        }
};

#endif //DATA_H
