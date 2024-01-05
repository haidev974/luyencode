/*Hailun*/
#include <iostream>
#define ll long long int

using namespace std;

ll t,n;
void Solve()
{
    string s="";
    cin >> n;
    while(n > 0)
    {
        (n % 2 == 0) ? s ='0'+ s : s = '1' + s;
        n /= 2;
    }
    cout << s << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--) Solve();
}
