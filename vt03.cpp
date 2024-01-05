/*Hailun*/
#include "iostream"
#define MAX 512345
using namespace std;

void NhapM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin >> a[i];
}

int Output(int a[], int n)
{
    int max = a[0];
    int iMax;
    for(int i=1; i<n; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            iMax = i;
        }
    }
    return iMax;
}

int main()
{
    int a[MAX], n;
    cin >> n;
    NhapM(a,n);
    cout << Output(a,n);
    return 0;
}
