#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct infomation
{
    int bef_bard;
    int aft_bard;
    int change_day;
};

int main(){
	int bards_num, days;
    cin >> bards_num >> days;

    // vector<int> bef_bards(bards_num);
    // vector<int> aft_bards(bards_num);
    // vector<int> day_info(days);
    vector<infomation> info(bards_num);

    for(int i = 0; i < bards_num; i++){
        cin >> info[i].bef_bard >> info[i].change_day >> info[i].aft_bard;
    }

    //j日目の重複なしを探す？
    unordered_map<int, int> um;
    


	return 0;
}