#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int people_number;  cin >> people_number;

    vector<int> takahashi_tall(people_number);
    vector<int> gone_time(people_number);
    //first: 身長, second: 時間
    for(int i = 0; i < people_number; i++){
        cin >> takahashi_tall[i] >> gone_time[i];
    }

    int querys, time, tallest_in_time;  cin >> querys;
    vector<int> suffix_max(people_number);
    suffix_max[people_number - 1] = takahashi_tall[people_number - 1];

    //配列の後ろからそれぞれのindexまでの最大値を見つける
    for(int i = people_number-2; i >= 0; i--){
        suffix_max[i] = max(takahashi_tall[i], suffix_max[i+1]);
    }

    //2部探索でそれぞれの時間（全高橋パターン）での最大値を見つける
    for(int q = 0; q < querys; q++){
        cin >> time;
        auto it = upper_bound(gone_time.begin(), gone_time.end(), time);
        int index = it - gone_time.begin();
        cout << suffix_max[index] << endl;;
    }
    return 0;

}