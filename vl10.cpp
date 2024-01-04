/*Hailun*/
#include "iostream"
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    if(s[0] == '-')
        len -= 1;
    cout << len;
    return 0;
}
