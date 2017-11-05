#include "Date.hpp"

Date Date::incrementDate(){
    this->day += 1;
    return *this;
}

int Date::getDay(){
    return this->day;
}