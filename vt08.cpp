/*Hailun*/
#include "iostream"
#include "iomanip"
// #define MAX 512345
using namespace std;
using ll = long long int;
const ll N = 10005;
ll n, a[N];
int main()
{
    cin >> n;
    a[0]=0,a[n+1]=0;
    for (ll i=1;i<=n;i++)
        cin>>a[i];
    for (ll i=1;i<=n;i++)
        (i % 2 == 1) ? cout << a[i] << " " : cout << a[i] + abs(a[i-1] - a[i+1]) << " ";
}
