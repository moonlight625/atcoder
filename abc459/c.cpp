#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n, q, cs, x;
    int count = 0;
    cin >> n >> q;

    vector<int> arr(n,0);
    bool all_stacked = false;
    bool ok = true;
    for(int i = 0; i < q; i++){
        cin >> cs;
        switch (cs)
        {
        case 1:
        all_stacked = true;
            cin >> x;
            arr[x-1]++;
            for(int j = 0; j < n; j++){
                if(arr[j] >= 1){
                    continue;
                }else{
                    //arr < 1
                    ok = false;
                    break;
                }
                if(ok){
                    all_stacked = true;
                }else{
                    all_stacked = false;
                    ok = true;
                }
            }
            for(auto x: arr){
                cout << x << " ";
            }
            cout << endl;
            break;
        case 2:
            cin >> x;
            for(int j = 0; j < arr.size(); j++){
                if(all_stacked){
                    arr[j]--;
                }
                if(arr[j] >= x){
                    count++;
                }
            }
            cout << count << endl;
            count = 0;
            // all_stacked = true;
            break;
        default:
            break;
        }
    }


	return 0;
}