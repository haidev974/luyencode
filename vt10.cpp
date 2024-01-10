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

void quickSort(int a[], int low, int high)
{
    if (low < high)
	{
        int pivot = a[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) 
		{
            if (a[j] > pivot) 
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

void XuatM(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[MAX], n;
    cin >> n;
    NhapM(a,n);
    quickSort(a,0,n-1);
    XuatM(a,n);
    return 0;
}
