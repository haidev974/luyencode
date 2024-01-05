/*Hailun*/
#include "iostream"
#include "iomanip"
#define MAX 512345
using namespace std;
void NhapM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin >> a[i];
}

int TongLe(int a[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
            sum+=a[i];
    }
    return sum;
}

int DemLe(int a[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
            count++;
    }
    return count;
}

int main()
{
    int a[MAX], n;
    cin >> n;
    NhapM(a,n);
    cout << fixed << setprecision(4) << (float)TongLe(a,n)/DemLe(a,n) << endl;
    return 0;
}
