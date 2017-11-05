using namespace std;
#include <vector>
#include "Date.hpp"

class Calendar{
private:
    vector<Date> Dates;
    int counter;
public:
    Calendar();
    Calendar( Calendar& );
    ~Calendar();
    Calendar& operator=(Calendar&);
    Calendar& operator+(Calendar&);
    Calendar& operator+=(Calendar&);

    vector<Date> show();
    Date getFirst();
    Date getLast();
    void add(Date);
};