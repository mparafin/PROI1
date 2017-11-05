#include <iostream>
#include "Date.hpp"

using namespace std;

string hue;

int main(){
    hue = "Yessss.";
    cout<< "lololol  " << hue << "\n";

    Date date1;
    date1.incrementDate();
    cout << "Incremented day: " << date1.getDay() << "\n";
    return 1;
}
