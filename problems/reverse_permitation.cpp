#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
/*
整数 N と o と x からなる長さ N の文字列 S が与えられます。長さ N の整数列 A=(A1,A2,…,AN) があります。はじめ A=(1,2,…,N) です。A に対して k=1,2,…,N の順に以下の操作を行います：Sk=o である場合、A の先頭 k 項を反転する。具体的には、A を (Ak,Ak−1,…,A1,Ak+1,Ak+2,…,AN) に置き換える。Sk=x である場合は何もしない。全ての操作を終えた後の A を求めてください。
*/

using namespace std;

int main(){
	int len;
    string condition;
    cin >> len >> condition;
    vector<int> old(len), next(len);
    for(int i = 0; i < len; i++){
        old[i] = i;
        next[i] = i;
    }

    //コピーするんじゃなくて古い配列と入れ替えた後の配列を2つ用意して上書きしていく。
    for(int i = 0; i < len; i++){
        if(condition[i] == 'x'){
            continue;
        }else{
            for(int k = i; k >= 0; k--){
                
            }
        }
    }
	return 0;
}