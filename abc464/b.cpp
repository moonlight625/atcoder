#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;
bool check_top_white(vector<string> &map){
    bool ng = false;
    int height = map.size();
    int width = map[0].size();
    for(int w = 0; w < width; w++){
        if(map[0][w] == '#'){
            return false;
        }
    }
    return true;
}
bool check_bottom_white(vector<string> &map){
    bool ng = false;
    int height = map.size();
    int width = map[0].size();
    for(int w = 0; w < width; w++){
        if(map[height-1][w] == '#'){
            return false;
        }
    }
    return true;
}
bool check_left_white(vector<string> &map){
    bool ng = false;
    int height = map.size();
    int width = map[0].size();
    for(int h = 0; h < height; h++){
        if(map[h][0] == '#'){
            return false;
        }
    }
    return true;
}
bool check_right_white(vector<string> &map){
    bool ng = false;
    int height = map.size();
    int width = map[0].size();
    for(int h = 0; h < height; h++){
        if(map[h][width-1] == '#'){
            return false;
        }
    }
    return true;
}

int main(){
	int height, width;
    cin >> height >> width;
    vector<string> map(height);
    for(int i = 0; i < height; i++){
        cin >> map[i];
    }

    bool exist_condition = true;
    while(exist_condition){
        
        exist_condition = false;

        if(check_top_white(map)){
            map.erase(map.begin());
            exist_condition = true;
        }
        if(check_bottom_white(map)){
            map.pop_back();
            exist_condition = true;
        }
        if(check_left_white(map)){
            for(int i = 0; i < map.size(); i++){
                map[i].erase(map[i].begin());
            }
            exist_condition = true;
        }
        if(check_right_white(map)){
            for(int i = 0; i < map.size(); i++){
                map[i].pop_back();
            }
            exist_condition = true;
        }
    }
    height = map.size();
    width = map[0].size();
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << map[i][j];
        }
        cout << endl;
    }
	return 0;
}