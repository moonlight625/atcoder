#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m;

    vector<int> fa(m,0);
    vector<bool> check(m,false);

    bool all = true;
    bool db = true;

    for(int i = 0; i < n; i++){
        cin >> c;
        fa[c-1]++;
        check[c-1] = true;
    }

    for(int i = 0; i < m; i++){
        if(fa[i] > 1){
            db = false;
        }

        if(check[i] == false){
            all = false;
        }
    }

    if(db){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    if(all){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}