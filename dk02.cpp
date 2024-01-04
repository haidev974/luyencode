/*Hailun*/
#include<iostream>
using namespace std;
int main(int agrc, char* argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a > b ? a : b) > (b > c ? b : c) ? (a > b ? a : b) : (b > c ? b : c));
    return 0;
}
