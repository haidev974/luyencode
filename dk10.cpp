/*Hailun*/
#include "iostream"
using namespace std;
bool isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

int main()
{
    int month, year;
    cin >> month >> year;
    if(month <= 0 || month >= 13 || year <= -100000 || year >= 100000)
    {
        cout << "INVALID" ;
        exit(0);
    }
    if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)    cout << "31" ;
    if(month == 4||month == 6||month == 9||month == 11) cout << "30" ;
    if(month == 2)
    {
        if(isLeapYear(year) == true)    cout << "29" ;
        else    cout << "28" ;
    }
    return 0;
}
