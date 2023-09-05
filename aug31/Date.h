// header file for Date Class
#include <string>

class Date
{
public:

    //
    explicit Date(int aYear, int aMonth, int aDay);

    //setters

    void setDay(int aDay);
    void setMonth(int aMonth);
    void setYear(int aYear);

    void setDate(int aYear, int aMonth, int aDay);

    //getters

    void getDay();
    void getMonth();
    void getYear();

    std::string getDate();

private:
    int day = 1;
    int month = 1;
    int year = 2000;


};