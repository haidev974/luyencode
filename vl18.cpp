/*Hailun*/
#include "iostream"
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int i = len - 1;
    while(s[i] == '0')
    {
        len-=1;
        i--;
    }
    for(int i=len-1; i>=0; i--)
        cout << s[i];
    return 0;
}
