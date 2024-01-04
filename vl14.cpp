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
    cout << abs(UCLN(a, b));
    return 0;
}
