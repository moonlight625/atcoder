#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>

using namespace std;

int main(){
	int n;
    cin >> n;

    int question_able = 2 * n;
    int yes_pair = 0;
    vector<string> tf_con_range(n-1);
    vector<int> no_range;
    set<pair<int,int>> asked;

    //連続区間を調べる、残り質問回数はN+1回（多分）
    for(int i = 1; i < n; i++){
        printf("? %d %d\n", i, i+1);
        cin >> tf_con_range[i-1];
        if(tf_con_range[i-1] == "Yes") {
            yes_pair++;
        }else{
            no_range.push_back(i+1);
        }
        asked.insert({i,i+1});
        question_able--;
    }

    //得られたyesnoをもとにどこまで質問するか決める
    vector<int> right_limit(n,n+1);
    int nsize = no_range.size();
    for(int l = 1; l <= n; l++){
        for(int i = 0; i < nsize; i++){
            if(no_range[i] > l){
                right_limit[l-1] = no_range[i];
                break;
            }
        }
    }

    //質問する
    for(int i = 1; i <= n && question_able > 0; i++){
        for(int j = i+1; j < right_limit[i-1]; j++){
            if(asked.count({i,j})){
                continue;
            }else{
                string tmp;
                printf("? %d %d\n", i, j);
                cin >> tmp;
                if(tmp == "Yes") yes_pair++;
                asked.insert({i,j});
                question_able--;
             }
        }
    }
    printf("! %d\n", yes_pair);
	return 0;
}