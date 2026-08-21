#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int width_pixel, height_pixel;
    cin >> width_pixel >> height_pixel;

    // int width_ratio = width_pixel / 16;
    // int height_ratio = height_pixel / 9;
    if(width_pixel % 16 == 0 && height_pixel % 9 == 0){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
	return 0;
}