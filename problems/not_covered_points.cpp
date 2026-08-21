#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<map>

using namespace std;

int main(){
	int points;
    cin >> points;

    //x,yをvectorに入れてxを昇順にソート
    vector<pair<int,int>> point_xy;
    for(int i = 0; i < points; i++){
        cin >> point_xy[i].first >> point_xy[i].second;
    }
    sort(point_xy.begin(), point_xy.end());

    
    //x昇順になっているので対象の点よりindexが小さいのは調べなくていいはず
    int min_y = INT_MAX;
    for(int ix = 0; ix < points; ix++){
        for(int iy = 0; iy < points; iy++){
            if(point_xy[iy].second < min_y){
                min_y = point_xy[iy].second;
            }
        }
    }
    
	return 0;
}