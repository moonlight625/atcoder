#include<iostream>
#include<vector>
#include<algorithm>

// using ll = long long;
// using ull = unsigned long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;

// #define rep(i, x, limit) for (int i = (int)x; i < (int)limit; i++)
// #define repe(i, x, limit) for (int i = (int)x; i <= (int)limit; i++)
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define el '\n'
// #define spa " "
// #define Yes cout << "Yes" << el
// #define No cout << "No" << el
// #define YES cout << "YES" << el
// #define NO cout << "NO" << el
// #define eps (1e-10)
// #define Equals(a,b) (fabs((a) - (b)) < eps )
// #define debug(x) cerr << #x << " = " << x << el

using namespace std;

int main(){
	int n,x,y,l;
    cin >> n;
    vector<vector<int>> a(n);

    for(int i = 0; i < a.size(); i++){
        cin >> l;
        vector<int> in(l);
        for(int j = 0; j < in.size(); j++){
            cin >> in[j];
        }
        a[i] = in;
    }
    cin >> x >> y;
    cout << a[x-1][y-1] << endl;

	return 0;
}