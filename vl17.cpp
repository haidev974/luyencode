/*Hailun*/
#include "iostream"
using namespace std;
int Dem(int x)
{
    int count = 0;
    for(int i = 1; i<= x; i++)
    {
        if(x % i == 0)
            count++;
    }
    return count;
}

int main()
{
    int a;
    cin >> a;
    a = abs(a);
    cout << Dem(a);
    return 0;
}
