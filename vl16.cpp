/*Hailun*/
#include "iostream"
using namespace std;
int UCLN(int x, int y)
{
    if(y == 0)
        return x;
    return UCLN(y , x % y);
}

int main()
{
    int a,b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    int BCNN = (a * b)/UCLN(a, b);
    cout << BCNN;
    return 0;
}
