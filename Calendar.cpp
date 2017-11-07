#include <iostream>
#include <vector>
#include "Calendar.hpp"
using namespace std;

Calendar::Calendar(){ //kontruktor domyślny
    Dates = new vector<Date>;
}

Calendar::Calendar(Calendar& input){ //konstruktor kopiujący
    Dates = new vector<Date>;
    for (int i=0; i<input.Dates->size(); i++) addDate((*input.Dates)[i]);
}

Calendar::~Calendar(){ //destruktor
    delete Dates;
}

Calendar& Calendar::operator=(Calendar& input){
    for (int i=0; i<input.Dates->size(); i++) addDate((*input.Dates)[i]);
}

Calendar& Calendar::operator+(Calendar& input) const{
    Calendar *tmp = new Calendar(input);
    for (int i=0; i<Dates->size(); i++) tmp->addDate((*Dates)[i]);
    return *tmp;
}

Calendar& Calendar::operator+=(Calendar& input){
    *this = *this + input;
    return *this;
}

ostream& operator<<(ostream& stream, Calendar& cal){
    stream << "Kalendarz:\n";
    for(int i=0; i<cal.Dates->size(); i++) stream << (*cal.Dates)[i] << "\n";
    return stream;
}

bool Calendar::checkDate(Date inputDate) const{ //zwraca 1, gdy daty nie ma jeszcze w zbiorze
    for(int i=0; i<(*this->Dates).size(); i++) if(inputDate == (*this->Dates)[i]) return 0;
    return 1;
}

void Calendar::addDate(Date inputDate){ //dodaje datę do zbioru
    if(checkDate(inputDate)) Dates->push_back(inputDate);
}

Date& Calendar::getFirst() const { //zwraca najwcześniejszą datę ze zbioru
    Date *first = new Date(0, 0, 0);
    if(Dates->size() == 0) return *first;
    *first = (*Dates)[0];
    for (int i=1; i < Dates->size(); i++){
        if((*Dates)[i] <= *first) *first = (*Dates)[i];
    }
    return *first;
} 

Date& Calendar::getLast() const { //zwraca najpóźniejszą datę ze zbioru
    Date *last = new Date(0, 0, 0);
    if(Dates->size() == 0) return *last;
    *last = (*Dates)[0];
    for (int i=1; i < Dates->size(); i++){
        if((*Dates)[i] >= *last) *last = (*Dates)[i];
    }
    return *last;
} 
