#include <iostream>
#include <vector>
#include "Calendar.hpp"

using namespace std;

int main(){
    Calendar cal1, cal2;
    /*Date date1, date2, date3;
    cal1.addDate(date1);
    cal1.addDate(date2);
    cal1.addDate(date3);
    cout << "Size1: " << cal1.getSize() << "\n";
    Calendar cal2;
    cal2 = cal2+cal1;
    cout << "Size2: " << cal2.getSize() << "\n";
    Calendar cal3(cal1);
    //cal3 += cal1;
    cout << "Size3: " << cal3.getSize() << "\n";*/

    Date date1(10, 12, 2015), date2(21, 11, 1997), date3(20, 11, 1997), date4(19, 11, 1997);
    cal1.addDate(date1);
    cal2.addDate(date1);
    cal2.addDate(date2);
    cal2.addDate(date3);
    cal1.addDate(date4);
    cout << cal1 << "\n";
    cout << cal2 << "\n";
    cal1 += cal2;
    cout << "-DODANIE CAL2 DO CAL1\n" << cal1 << "\n";
    cout << "Size: " << cal1.getSize() << "\n";
    cout << "First: " << cal1.getFirst() << "\n";
    cout << "Last: " << cal1.getLast() << "\n";
    
    return 1;
}
