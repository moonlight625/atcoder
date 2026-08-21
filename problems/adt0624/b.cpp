#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int height, width;
    cin >> height >> width;

    // h:たて、w:横
    string line;
    int count = 0;
    for(int i = 0; i < height; i++){
        cin >> line;
        for(int j = 0; j < width; j++){
            if(line[j] == '#'){
                count++;
            }
        }
    }

    cout << count << endl;
	return 0;
}