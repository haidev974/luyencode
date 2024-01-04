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
    int year;
    cin >> year;
    if(year <= 0 || year > 100000)
    {
        cout << "INVALID" ;
        exit(0);
    }
    if(isLeapYear(year))    cout << "YES" ;
    else    cout << "NO" ;
    return 0;
}
