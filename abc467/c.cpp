#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;
/*
2 ≤ N ≤ 2×10^5
M=2
0 ≤ A_i ≤ M−1
0 ≤ B_i ≤ M−1
入力される値はすべて整数


1 <= i <= Nを選んでA_i += 1
1 <= i <= N-1 でA_i + A_(i+1) % M = B_i 

偶奇を見るので1つ決めればそのあとも全部決まりそう？

*/
int main(){
	int n,m; // m = 2
    cin >> n >> m;
    vector<int> a(n),b(n-1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
    }

    //A_i = 1の時
    int count_one = 0;
    vector<int> c(n); //aをコピーするよう,実際に動かすもの
    c = a;
    if(c[0] == 0){
        c[0] = 1;
        count_one++;
    }
    for(int i = 0; i < n-1; i++){
        //偶奇がb[i]と同じなら何もしない、違うならc[i+1]を反転
        if( (c[i] + c[i+1]) % 2 == b[i] ){
            continue;
        }else{
            c[i+1] += 1;
            count_one++;
        }
    }

    //A_I = 0の時
    int count_zero = 0;
    c = a;
    if(c[0] == 1){
        c[0] = 0;
        count_zero++;
    }
    for(int i = 0; i < n-1; i++){
        //偶奇がb[i]と同じなら何もしない、違うならc[i+1]を反転
        if( (c[i] + c[i+1]) % 2 == b[i] ){
            continue;
        }else{
            c[i+1] += 1;
            count_zero++;
        }
    }

    int min_count = (count_zero < count_one) ? count_zero : count_one;
    cout << min_count << endl;

	return 0;
}