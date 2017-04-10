#include <iostream>
//#include <vector>
#include "Person.h"

//#define MAX 3

int main() {
    /*
    vector<Person> individuals;
    Person *individual;
    int i = 0;
    
    for(string name, age, phone; i < MAX; i++) {
        cout << endl << (i+1) << "st - Type name.: ";
        getline(cin, name);
        
        cout << (i+1) << "st - Type age..: ";
        cin >> age;
        cin.ignore();
        
        cout << (i+1) << "st - Type phone: ";
        cin >> phone;
        cin.ignore();
        
        individual= new Person(name, age, phone);
        individuals.push_back(*individual);
    }
    
    for(int i = 0; i < individuals.size(); i++)
        cout << endl << individuals[i].toString() << endl;
    */
    
    Person individual_1("Anybody", "25", "555-36541205");
    Person individual_2("Someone", "30", "555-54971236");
    Person individual_3("Anyone" , "45", "555-16415164");
    
    cout << individual_1.toString() << endl << endl;
    cout << individual_2.toString() << endl << endl;
    cout << individual_3.toString() << endl << endl;
    
    return 0;
}
