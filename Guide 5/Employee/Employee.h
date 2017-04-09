#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee {
    private:
        string name,
               lastName;
               
        float salary;
        
    public:
        Employee(string, string, float);
        
        void setName(string);
        string getName();
        
        void setLastName(string);
        string getLastName();
        
        void setSalary(float);
        float getSalary();
        
        string toString();
};

#endif //EMPLOYEE_H 
