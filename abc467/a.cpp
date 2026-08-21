#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int height, weight;
    cin >> height >> weight;
    double height_d = height / 100;
    bool bmi_check = weight * 10000 >= 25 * height * height;
    if(bmi_check){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
	return 0;
}