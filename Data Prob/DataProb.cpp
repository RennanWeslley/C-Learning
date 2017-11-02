#include <iostream>
#include <cstdlib>
#include <vector>
#include "Data.h"

#define COL 5

string lineData[COL] = {"Data Type", "Freq.Abs.", "Freq.Rel.", "Freq.Rel.(%)", "Freq.Rel.Ac."};

void drawTable(int, vector<Data>);

int main() {
    vector<Data> data;
    
    /*
        Recebe Dados do Usuário;
        
        int L = data.size(); //Seta L como o total de dados digitados. (Ex: L = total de estilos músicais citados pelo user)
        
        Realiza os cálculos necessãrios;
    */
    
    /*
    string s[(L*COL)];
    
    for(int i = 0, pos = 0; i < L; i++) {
        s[pos++] = data[i].getName();
        s[pos++] = data[i].getFreqAbs();
        s[pos++] = data[i].getFreqRel();
        s[pos++] = data[i].getFreqRelPer();
        s[pos++] = data[i].getFreqRelAc();
    }
    
    drawTable(L, s);
    */
    
    drawTable(L, data);
}

void drawTable(int L, vector<Data> data) {
    cout << " | ";
    for(int i = 0; i < COL; i++)
        cout << lineData[i] << " | ";
    
    cout << endl;
    for(int i = 0, pos = 0; i < L, i++) {
        cout << " | ";
        for(int j = 0; j < COL; j++) {
            cout data[i].getName()       << " | "
              << data[i].getFreqAbs()    << " | "
              << data[i].getFreqRel()    << " | "
              << data[i].getFreqRelPer() << " | "
              << data[i].getFreqRelAc()  << " | ";
        }
            
        cout << endl;
    }
}
