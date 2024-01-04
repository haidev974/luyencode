/*Hailun*/
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void gptb1(int a, int b){
    if(a == 0){
        if(b == 0) cout << "INF";
        else cout << "NO";
    }else cout << fixed << setprecision(2) << (float)-b/a;
}

void gptb2(int a, int b, int c){
    if(a == 0) gptb1(b, c);
    else{
        int delta = b*b - 4*a*c;
        if(delta < 0) cout << "NO";
        else if(delta == 0) cout << fixed << setprecision(2) << (float)-b/(2*a);
        else{
            cout << fixed << setprecision(2) << (float)(-b - sqrt(delta))/(2*a) << " " << (float)(-b + sqrt(delta))/(2*a);
        }
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    gptb2(a, b, c);
    return 0;
}
