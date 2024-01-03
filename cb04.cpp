/*Hailun*/
#include<bits/stdc++.h>

using namespace std;

int main(int agrc, char* argv[]){
    int a, b;
    cin >> a >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    
    if(b == 0){
        cout<<"ERROR"<<endl;
    }else{
        cout<< fixed << setprecision(2)<< float(a) / float(b) << endl;
    }

}
