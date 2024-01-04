/*Hailun*/
#include "iostream"
using namespace std;
unsigned long long GiaiThua(long long n)
{
    if(n == 0)
        return 1;
    return n * GiaiThua(n - 1);
}

int main()
{
    long long n;
    cin >> n;
    cout << GiaiThua(n);
    return 0;
}
