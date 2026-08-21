#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;
const struct sushi
{
    int a: 8,

};


int main(){
	int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
	return 0;
}

