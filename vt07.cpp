/*Hailun*/
#include "iostream"
#include "iomanip"
// #define MAX 512345
using namespace std;
void NhapM(int a[])
{
    for(int i=0; i<11; i++)
        cin >> a[i] ;
}

void search(int a[])
{
    int count = 0;
    int index = a[10];
    for(int i=0; i<10; i++)
    {
        if(a[i] == index)
        {
            cout << i + 1 << " ";
            count++;
        }
    }
    if(count == 0)
        cout << -1 ;
}

int main()
{
    int a[20];
    NhapM(a);
    search(a);
    return 0;
}
