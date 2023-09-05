#include <string>
#include "Date.h"

    //CONSTRUCTOR
    Date::Date(int aYear, int aMonth, int aDay): year(aYear), month(aMonth), day(aDay)
    {
        //intentionally left blank
    };

    /*Alternate method

    Date::Date(int aYear, int aMonth, int aDay)
    {
        year = aYear;
        month = aMonth;
        day = aDay;
    }
    */


    //setters

    void Date::setDay(int aDay)
    {
        day = aDay;
    };
    void Date::setMonth(int aMonth)
    {
        month = aMonth;
    };
    void Date::setYear(int aYear)
    {
        year = aYear;
    };

    void Date::setDate(int aYear, int aMonth, int aDay)
    {
        year = aYear;
        month = aMonth;
        day = aDay;
    };

    //getters

    void Date::getDay()
    {
        return day;
    };
    void Date::getMonth()
    {
        return month;
    };
    void Date::getYear()
    {
        return year;
    };

    std::string Date::getDate()
    {
        return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
    };