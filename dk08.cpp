/*Hailun*/
#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    float a,b;
    char cal;
    cin >> a;
    cin >> cal;
    cin >> b;
    if(cal == '+')  cout << fixed << setprecision(2) << a + b << endl;
    if(cal == '-')  cout << fixed << setprecision(2) << a - b << endl;
    if(cal == '*')  cout << fixed << setprecision(2) << a * b << endl;
    if(cal == '/')
    {
        if(b == 0)
        {
            cout << "Math Error" ;
            exit(0);
        }
        cout << fixed << setprecision(2) << a / b << endl;
    }
    return 0;
}
