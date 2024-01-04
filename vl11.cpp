/*Hailun*/
#include "iostream"
#include "math.h"
using namespace std;
bool isPrime(long x)
{
    if(x < 2)
        return false;
    if(x > 2)
    {
        if(x % 2 == 0)
            return false;
        else{
            for(int i=3; i<=sqrt(x); i=i+2)
            {
                if(x % i == 0)
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    long n;
    cin >> n;
    if(isPrime(n))  cout << "YES" ;
    else    cout << "NO" ;
    return 0;
}
