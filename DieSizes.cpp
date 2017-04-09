#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

double doMath(int, int);

int main() {
    srand((unsigned) time(NULL));
    
    int sort;
    int n;
    
    int one   = 0,
        two   = 0,
        three = 0,
        four  = 0,
        five  = 0,
        six   = 0;
    
    cout << "Type the N value: ";
    cin >> n;
    
    int nAux = n;
    
    while(n--) {
        sort = (int) (rand() % 6) + 1;
        
        switch(sort) {
            case 1:
                one++;
                break;
            
            case 2:
                two++;
                break;
                
            case 3:
                three++;
                break;
            
            case 4:
                four++;
                break;
                
            case 5:
                five++;
                break;
                
            case 6:
                six++;
                break;
        }
    }
    
    cout << endl << "Side 1, appeared " << one << " times with percentage of " << setprecision(2) << doMath(one, nAux) << "%." << endl;
    cout << "Side 2, appeared " << two << " times with percentage of " << setprecision(2) << doMath(two, nAux) << "%." << endl;
    cout << "Side 3, appeared " << three << " times with percentage of " << setprecision(2) << doMath(three, nAux) << "%." << endl;
    cout << "Side 4, appeared " << four << " times with percentage of " << setprecision(2) << doMath(four, nAux) << "%." << endl;
    cout << "Side 5, appeared " << five << " times with percentage of " << setprecision(2) << doMath(five, nAux) << "%." << endl;
    cout << "Side 6, appeared " << six << " times with percentage of " << setprecision(2) << doMath(six, nAux) << "%." << endl << endl;
    
    return 0;
}

double doMath(int n, int total) {
    return (double) n*100 / total;
}

