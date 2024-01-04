/*Hailun*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a == 0 && b == 0)
    {
        cout << "WOW" ;
        exit(0);
    }
    if(a == 0)
    {
        cout << "NO" ;
        exit(0);
    }
    cout << fixed << setprecision(2) << (float) - b / a;
    return 0;
}
