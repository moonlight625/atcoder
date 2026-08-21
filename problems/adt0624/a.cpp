#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<cmath>

using namespace std;

int main(){
	double a,b;
    cin >> a >> b;
    if(a%b == 0) {cout << a/b << endl; return 0;}
    double div = a/b;
    cout << (int)round(div);
    // if(1 - div < 0.5){
    //     if(div < 1){
    //         cout << 0 << endl;
    //         return 0;
    //     }else{
    //         cout << (int)div << endl;
    //         return 0;
    //     }
    // }else{
    //     if(div < 1){
    //         cout << 1 << endl;
    //         return 0;
    //     }else{
    //         cout << (int)div << endl;
    //         return 0;
    //     }
    // }



	return 0;
}