#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    int chair;
    string s = "x";
    string tmp;
    cin >> chair >> tmp;
    s += tmp;
    s += "x";

    int count = 0;
    for(int i = 1; i <= chair; i++){
        if(s[i-1] == 'x' && s[i+1] == 'x' && s[i] == 'x'){
            count++;
        }
    }
    cout << count << endl;
	return 0;
}