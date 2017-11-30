#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <math.h>
#include "Data.h"

#define COL 5

string lineData[] = {" |  Data Type ", " |  Freq.Abs. ", " | Freq.Rel. ", "|  Freq.Rel.(%)", " | Freq.Rel.Ac. |"};

bool search(vector<double>, double);
int numOf(vector<double>, double);
void drawTable(vector<Data>, double, double, double, double, double);
int between(vector<double>, double, double);

int main() {
    int L = 0;

    double sumFreqRel,
          sumFreqRelPer,
          classes,
          ampTotal,
          intervalo;

    sumFreqRel = sumFreqRelPer = 0;

    vector<Data> data;
    vector<double> dataN;
    Data *dataT;

    /* Recieving user data files */
    for(string s; 1; L++) {
        cout << "Digite o " << (L+1) << "\xa7" << " dado ou \"exit\" para sair: ";
        cin >> s;
        cin.ignore();

        if(!s.compare("exit"))
            break;

        /* Conv. string to int */
        stringstream intStr(s);
        double auxIntStr;
        intStr >> auxIntStr;
        /* End Of Conversion */

        dataN.push_back(auxIntStr);
        sort(dataN.begin(), dataN.end()); // Sorting the vector dataN
    }
    /* End Of Recieving Data */
    
    classes = sqrt(L);
    ampTotal = dataN[L-1] - dataN[0];
    intervalo = (double) ampTotal/classes;
    
    /* Setting Atributes */
    for(int i = 0; i < dataN.size(); i++) {
        dataT = new Data();
        double aux;
        
        if(!i) {
            dataT->setName(dataN[i]);
            dataT->setFreqAbs(between(dataN, dataT->getName(), dataT->getName() + intervalo));
        }
        else {
            dataT->setName(aux);
            dataT->setFreqAbs(between(dataN, dataT->getName(), aux + intervalo));
        }
        
        aux = dataT->getName() + intervalo;
        dataT->calcFreqRel(L);
        dataT->calcFreqRelPer(L);
        data.push_back(*dataT);
        data[i].calcFreqRelAc(data, i);

        /* Sum */
        sumFreqRel    += dataT->getFreqRel();
        sumFreqRelPer += dataT->getFreqRelPer();
        /* End Of Sum */
    }
    /* End Of Set Atributes */

    /* Drawing Table */
    drawTable(data, classes, intervalo, dataN.size(), sumFreqRel, sumFreqRelPer);

    return 0;
}

/* Returns true if the num was on the vector data otherwise returns false */
bool search(vector<double> data, double num) {
    for(int i = 0; i < data.size(); i++) {
        if(num == data[i])
            return true;
    }

    return false;
}

/* Returns the index of the num in the vector data */
int numOf(vector<double> data, double num) {
    int j = 0;

    for(int i = 0; i < data.size(); i++)
        if(num == data[i])
            j++;

    return j;
}

int between(vector<double> data, double num, double numInt) {
    int count = 0;
    
    for(int i = 0; i < data.size(); i++) {
        if(data[i] >= num && data[i] < numInt)
            count++;
    }
        
    return count;
}

/* Draw the Table */
void drawTable(vector<Data> data, double classes, double intervalo, double sumFreqAbs, double sumFreqRel, double sumFreqRelPer) {
    stringstream sumAbs,
                 sumRel,
                 sumPer,
                 sumAc;

    sumAbs << setw(3) << sumFreqAbs;
    sumRel << setw(3) << sumFreqRel;
    sumPer << setw(3) << setfill('0') << sumFreqRelPer;
    sumAc  << setw(3) << data[data.size() - 1].getFreqRelAc();

    cout << endl;
    for(int i = 0; i < COL; i++)
        cout << lineData[i];

    cout << endl;
    for(int i = 0; i <= ceil(classes); i++)
        cout << data[i].stringTable(intervalo) << endl;

    cout << "      Total        " << sumAbs.str()
         << "           "           << sumRel.str()
         << "           "           << sumPer.str()
         << "             "        << sumAc.str()
         << endl << endl;
}
