/*Hailun*/
#include "iostream"
using namespace std;
int main()
{
    long n;
    cin >> n;
    n = abs(n);
    if(n == 0  || n > 10000)  
    {
        cout << "INF" ;
        exit(0);
    }
    for(int i = n; i > 0; i--)
    {
        if(n % i == 0)  
            cout << i << " ";
    }
    return 0;
}
