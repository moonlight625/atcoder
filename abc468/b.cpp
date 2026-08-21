#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>

using namespace std;

int main(){
	int mass, distance;
    string info;
    cin >> mass >> distance >> info;
    set<int> exist_guard;
    for(int i = 0; i < mass; i++){
        if(info[i] == 'G'){
            exist_guard.insert(i);
        }
    }

    int not_guard = 0;
    for(int i = 0; i < mass; i++){
        if(info[i] == '.'){
            // +-distanceのマスにGがいるかどうか見る。からまずGがいるますを出して調べたいindex+distanceがその配列にあるかみる
            for(int j = 0; j < distance; j++){
                if(exist_guard.count(i++) || exist_guard.count(i--)){
                    not_guard++;
                }
            }
        }
    }

    cout << not_guard << endl;
	return 0;
}