#include <vector>
#include "Date.hpp"
using namespace std;

class Calendar{
private:
    vector<Date> Dates;
public:
    Calendar();
    Calendar(Calendar&);
    //~Calendar();
    Calendar& operator=(Calendar&);
    Calendar& operator+(Calendar&);
    Calendar& operator+=(Calendar&);

    bool checkDate(Date);
    int getSize(){return Dates.size();}

    vector<Date> show();
    Date getFirst();
    Date getLast();
    void add(Date);
};