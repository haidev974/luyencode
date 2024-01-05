/*Hailun*/
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;
const ll N = 1000001;
ll n, a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    for (ll i = 2; i <= n; i++)
    {
        if (a[i] != a[i-1])
        {
            cout << a[i];
            return 0;
        }
    }
    cout << "NOT FOUND";
}
