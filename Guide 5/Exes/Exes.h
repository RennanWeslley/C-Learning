#ifndef EXES_H
#define EXES_H

using namespace std;

class Exes {
    private:
        double value;
        string exesType;
        
    public:
        void setValue(double);
        double getValue();
        
        void setExesType(string);
        string getExesType();
        
        string toString();
};

#endif //EXES_H
