/*Hailun*/
#include "iostream"
#include "math.h"
#include "iomanip"
#define MAX 512345
using namespace std;
void NhapM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin >> a[i];
}

bool isPrime(int x)
{
    if(x < 2)
        return false;
    if(x > 2)
    {
        if(x % 2 == 0)
            return false;
        else
        {
            for(int i=3; i<=sqrt(x); i=i+2)
            {
                if(x % i == 0)
                    return false;
            }
        }
    }
    return true;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
	{
        int pivot = a[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) 
		{
            if (a[j] < pivot) 
			{
                i++;
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;
        long long pi = i + 1;
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void Out(int a[], int n)
{
    int index = -1e9 - 1e3;
    for(int i=0; i<n; i++)
    {
        if(a[i] != index)
        {
            if(isPrime(a[i]))
                cout << a[i] << " ";
        }
        index = a[i];
    }
}

int main()
{
    int a[MAX], n;
    cin >> n;
    NhapM(a,n);
    quickSort(a,0,n-1);
    Out(a,n);
    return 0;
}
