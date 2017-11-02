#ifndef DATA_H
#define DATA_H

using namespace std;

class Data {
    private:
        string name;
        float freqAbs,
              freqRel,
              freqRelPer,
              freqRelAc;
    
    public:
        /*
        Data(){}
        
        Data(string name, float freqAbs, float freqRel, float freqRelPer, float freqRelAc) {
            setName(name);
            setFreqAbs(freqAbs);
            setFreqRel(freqRel);
            setFreqRelPer(freqRelPer);
            setFreqRelAc(freqRelAc);
        }
        */
        
        void setName(string name) {
            this->name = name;
        }
        
        void setFreqAbs(float freqAbs) {
            this->freqAbs = freqAbs;
        }
        
        void setFreqRel(float freqRel) {
            this->freqRel = freqRel;
        }
        
        void setFreqRelPer(float freqRelPer) {
            this->freqRelPer = freqRelPer;
        }
        
        void setFreqRelAc(float freqRelAc) {
            this->freqRelAc = freqRelAc;
        }
        
        string getName() {
            return name;
        }
        
        float getFreqAbs() {
            return freqAbs;
        }
        
        float getFreqRel() {
            return freqRel;
        }
        
        float getFreqRelPer() {
            return freqRelPer;
        }
        
        float getFreqRelAc() {
            return freqRelAc;
        }
        
};

#endif //DATA_H