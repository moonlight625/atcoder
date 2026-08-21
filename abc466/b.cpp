#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int balls, colors;
    cin >> balls >> colors;

    vector<vector<int>> info_ball(colors,vector<int>(1,-1));

    for(int i = 0; i < balls; i++){
        int color, size;
        cin >> color >> size;
        info_ball[color - 1].push_back(size);
    }

    for(int c = 0; c < colors; c++){
        int max_color = *max_element(info_ball[c].begin(), info_ball[c].end());
        cout << max_color << " ";
    }
	return 0;
}