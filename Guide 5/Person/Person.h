#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
    private:
        string name,
               age,
               phone;
   
    public:
        Person(string);
        Person(string, string, string);
        
        void setName(string);
        string getName();
        
        void setAge(string age);
        string getAge();
        
        void setPhone(string);
        string getPhone();
        
        string toString();    
};

#endif //PERSON_H
