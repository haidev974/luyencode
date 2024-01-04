/*Hailun*/
#include<iostream>
#include<math.h>
using namespace std;
bool Check(long long x)
{
    long long tmp;
    tmp = sqrt(x);
    if(tmp * tmp == x)
        return true;
    return false;
}

int main()
{
    long long n;
    cin >> n;
    if(Check(n) == true)    cout << "YES" ;
    else    cout << "NO" ;
    return 0;
}
