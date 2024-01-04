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
    int UChung = abs(UCLN(a, b));
    int tu,mau;
    tu = a / UChung;
    mau = b / UChung;
    if(mau == 0)
    {
        cout << "INVALID" ;
        exit(0);
    }
    float index = (float)tu/mau;
    int tmp = index;
    if(tmp == index)
    {
        cout << tmp ;
        exit(0);
    }
    if(tu < 0 && mau < 0)
    {
        cout << abs(tu) << " " << abs(mau);
        exit(0);
    }
    if(tu > 0 && mau < 0)
    {
        cout << -tu << " " <<abs(mau);
        exit(0);
    }else{
        cout << tu << " " <<mau;
    }
    return 0;
}
