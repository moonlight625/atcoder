#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	string s = "HelloWorld";
    int x;
    cin >> x;

    cout << s.erase(x,1) << endl;
	return 0;
}