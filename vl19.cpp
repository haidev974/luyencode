/*Hailun*/
#include "iostream"
using namespace std;
bool check(int x)
{
    if(x % 3 == 0)
        return true;
    return false;
}

int main()
{
    int a,b;
    cin >> a >> b;
    bool count = false;
    for(int i = b-1; i > a; i--)
    {
        if(check(i))
        {
            cout << i << " ";
            count = true;
        }
    }
    if(count == false)
        cout << "NOT FOUND" ;
    return 0;
}
