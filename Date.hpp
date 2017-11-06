#include <iostream>

class Date{
    private:
        int day, month, year;
    public:
        Date();
        Date(int, int ,int);
        int getDay() const {return day;}
        int getMonth() const {return month;}
        int getYear() const {return year;}
        
        Date& operator=(Date&);
        bool operator==(Date&) const;
        bool operator<=(Date&) const;
        bool operator>=(Date&) const;        
        friend std::ostream& operator<<(std::ostream& stream, Date& printed);
};
