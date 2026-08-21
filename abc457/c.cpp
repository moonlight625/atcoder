#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n,k,l,x,y;
    cin >> n >> k;
    int left_len = n;
    int all_push_times = 0;
    vector<vector<int>> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i = 0; i < a.size(); i++){
        cin >> l;
        vector<int> in(l);
        for(int j = 0; j < in.size(); j++){
            cin >> in[j];
        }
        a[i] = in;

        // [i] = in.size();
    }
    
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    //kから追加した配列のサイズを引いていって0以下になったら-k分戻る？
    for(x = 0; x < n; x++){
        for(int j = 0; j < c[x]; j++){
            k -= a[x].size();
            if(k < 0) break;
        }
    }

    //マイナスで終わっているので1つ前の配列の最後から数えた位置
    x--;
    y = a[x].size() + k - 1;
    if(x < 0) x = 0;
    if(y < 0) y = 0;

    cout << a[x][y] << endl;

    // //k-1

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < c[i]; j++){
    //         for(int e = 0; e < a[i].size(); e++){
    //             b[i] = a[i][e];
    //         }
    //     }
    // }

    // cout << b[k-1] << endl;
	return 0;
}