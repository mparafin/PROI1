#include "Date.hpp"
using namespace std;

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int iday, int imonth, int iyear){
    day = iday;
    month = imonth;
    year = iyear;
}

Date& Date::operator=(Date& input){
    day = input.day;
    month = input.month;
    year = input.year;
    return *this;
}

bool Date::operator==(Date& input) const{
    if(this->day == input.day && this->month == input.month && this->year == input.year) return 1;
    else return 0;
}

bool Date::operator<=(Date& second) const{
    if (year<second.getYear()) return true;
    if (year>second.getYear()) return false;
    else{
        if (month<second.getMonth()) return true;
        if (month>second.getMonth()) return false;
        else{
            if (day<=second.getDay()) return true;
            else return false;
        }
    }
}

bool Date::operator>=(Date& second) const{
    if (year>second.getYear()) return true;
    if (year<second.getYear()) return false;
    else{
        if (month>second.getMonth()) return true;
        if (month<second.getMonth()) return false;
        else{
            if (day>=second.getDay()) return true;
            else return false;
        }
    }
}


ostream& operator<<(ostream& stream, Date& printed){
    stream << printed.getDay() << "." << printed.getMonth() << "." << printed.getYear();
}

