/*Hailun*/
#include "iostream"
#include "iomanip"
#define ld long
using namespace std;
double Output(ld n)
{
    if(n == 2)
        return 0.5000;
    return (double)1/n + Output(n - 1);
}

int main()
{
    ld n;
    cin >> n;
    double number = Output(n);
    cout << fixed << setprecision(4) << number << endl;
    return 0;
}
