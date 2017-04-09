#ifndef DATE_H
#define DATE_H

using namespace std;

class Date {
    private:
        int day,
            month,
            year;
            
    public:
        Date(int, int, int);
        
        void setDay(int);
        int getDay();
        
        void setMonth(int);
        int getMonth();
        
        void setYear(int);
        int getYear();
        
        void advanceDay();
        
        string toString();
};

#endif //DATE_H
