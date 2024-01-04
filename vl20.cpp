/*Hailun*/
#include "iostream"
using namespace std;
int main()
{
    char s1,s2;
    cin >> s1 >> s2;
    for(int i=s1; i<=s2; i++)
        cout << char(i - 32) << " ";
    return 0;
}
