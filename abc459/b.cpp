#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

char check_head_char(string s){
    char x = s[0];
    if(x == 'a' || x == 'b' || x == 'c'){
        return '2';
    }else if(x == 'd' || x == 'e' || x == 'f'){
        return '3';
    }else if(x == 'g' || x == 'h' || x == 'i'){
        return '4';
    }else if(x == 'j' || x == 'k' || x == 'l'){
        return '5';
    }else if(x == 'm' || x == 'n' || x == 'o'){
        return '6';
    }else if(x == 'p' || x == 'q' || x == 'r' || x == 's'){
        return '7';
    }else if(x == 't' || x == 'u' || x == 'v'){
        return '8';
    }else if(x == 'w' || x == 'x' || x == 'y' || x == 'z'){
        return '9';
    }
}

int main(){
	string ret = "";
    string s;
    int n;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        ret += check_head_char(s);
    }

    cout << ret << endl;
	return 0;
}