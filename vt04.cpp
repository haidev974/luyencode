/*Hailun*/
#include "iostream"
#define MAX 512345
using namespace std;
void NhapM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin >> a[i] ;
}

bool Output(int a[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
            return true;
    }
    return false;
}

int main()
{
    int a[MAX], n, k;
    cin >> n >> k;
    NhapM(a,n);
    if(Output(a,n,k))   cout << "YES" ;
    else    cout << "NO" ;
    return 0;
}
