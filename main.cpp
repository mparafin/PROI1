#include <iostream>
#include <vector>
#include "Calendar.hpp"

using namespace std;

string hue;

int main(){
    Calendar cal1;
    Date date1, date2, date3;
    cal1.add(date1);
    cal1.add(date2);
    cal1.add(date3);
    cout << "Size1: " << cal1.getSize() << "\n";
    Calendar cal2;
    cal2 = cal2+cal1;
    cout << "Size2: " << cal2.getSize() << "\n";
    Calendar cal3;
    cal3 += cal1;
    cout << "Size3: " << cal3.getSize() << "\n";
    
    return 1;
}
