/*Hailun*/
#include "iostream"
#include "math.h"
#include "iomanip"
#define ll long long
using namespace std;
ll giaithua(int a)
{
    if(a == 1)
        return 1;
    return giaithua(a - 1) * a;
}

double Output(int x, int n)
{
    if(n == 1)
        return x;
    return ((double)pow(x,n)/giaithua(n)) + Output(x,n-1);
}

int main()
{
    int x,n;
    cin >> x >> n;
    cout << fixed << setprecision(2) << Output(x,n);
    return 0;
}
