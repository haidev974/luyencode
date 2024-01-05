/*Hailun*/
#include "iostream"
#define MAX 512345
using namespace std;
void NhapM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin >> a[i];
}

int Dem(int a[], int n, int k)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
            count++;
    }
    return count;
}

int main()
{
    int a[MAX], n, k;
    cin >> n >> k;
    NhapM(a,n);
    cout << Dem(a,n,k);
    return 0;
}
