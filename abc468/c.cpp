#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>
#include<stack>

using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<bool>& visited){
    visited[v] = true;
    for(int u : graph[v]){
        if(!visited[u]) dfs(u, graph, visited);
    }
}

int main(){
	int n;
    cin >> n;
    vector<int> p, q;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }

    /*
        Pより大きいことを確認したらその後の桁でQより小さい数列を探せばよさそう
        なので探索を始める1けためはPより大きくてQより小さい初めての数字からすたーと
        そこから次の桁がQより小さいかどうかを確認していく
    */

    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 1);

    int count = 0;
    do {
        if (p < perm && perm < q) count++;
    } while (next_permutation(perm.begin(), perm.end()));

cout << count << endl;
	return 0;
}