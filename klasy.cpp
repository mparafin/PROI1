#include "klasy.hpp"

Date Date::incrementDate(){
    this->day += 1;
    return *this;
}