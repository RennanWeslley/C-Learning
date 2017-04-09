#ifndef EXESCONTROL_H
#define EXESCONTROL_H

#include "Exes.h"
#include <vector>

class ExesControl {
    private:
        vector<Exes> exes;
        
    public:
        void setExes(Exes);
        double computeTotalExes();
        bool shareType(string);
        
        string toString();
};

#endif //EXESCONTROL_H
