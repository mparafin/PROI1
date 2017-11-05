#include <iostream>
#include <vector>
#include "Calendar.hpp"

Calendar::Calendar(){
    Dates = *(new vector<Date>);
}

Calendar::Calendar(Calendar& input){
    Dates = input.Dates;
}

//Calendar::~Calendar(){
//    delete [] &Dates;
//}

Calendar& Calendar::operator=(Calendar& input){
    Dates = input.Dates;
}

Calendar& Calendar::operator+(Calendar& input){
    for (int i=0; i<input.Dates.size(); i++) Dates.push_back(input.Dates[i]);
    return *this;
}

Calendar& Calendar::operator+=(Calendar& input){
    return *this+input;
}

void Calendar::add(Date input){
    Dates.push_back(input);
}
