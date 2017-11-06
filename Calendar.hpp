#include <vector>
#include "Date.hpp"
using namespace std;

class Calendar{
private:
    vector<Date> *Dates; //dynamiczna struktura danych
public:
    Calendar();
    Calendar(Calendar&);
    ~Calendar();
    Calendar& operator=(Calendar&);
    Calendar& operator+(Calendar&) const;
    Calendar& operator+=(Calendar&);
    friend std::ostream& operator<<(std::ostream&, Calendar&);

    bool checkDate(Date) const; //zwraca 1, gdy daty nie ma jeszcze w zbiorze
    int getSize() const {return Dates->size();}
    void addDate(Date); //dodaje datę do zbioru
    
    Date& getFirst() const; //zwraca najwcześniejszą datę ze zbioru
    Date& getLast() const; // zwraca najpóźniejszą datę ze zbioru
};