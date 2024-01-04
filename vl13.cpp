/*Hailun*/
#include "iostream"
using namespace std;
bool check(long x)
{
    int sum = 0;
    for(int i = 1; i<x; i++)
    {
        if(x % i == 0)
            sum+=i;
    }
    if(sum == x)
        return true;
    return false;
}

int main()
{
    long n;
    cin >> n;
    if(n <= 0)
    {
        cout << "NO" ;
        exit(0);
    }
    if(check(n))    cout << "YES" ;
    else    cout << "NO" ;
    return 0;
}
