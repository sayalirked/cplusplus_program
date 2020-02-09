#include <cassert>
#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

int main(){
    Date date;

    date.day=29;
    date.month=8;
    date.year=1992;

    assert(date.day==29);
    assert(date.month==8);
    assert(date.year==1992);

    std::cout << date.day << "/" << date.month << "/" << date.year << "\n";
}