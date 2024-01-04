/*Hailun*/
#include "iostream"
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    n = 3 * n + 1;
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)  sum-=i;
        else    sum+=i;
    }
    cout << sum;
    return 0;
}
