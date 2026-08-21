#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    int n_bag;
    string bag;
    cin >> n_bag >> bag;

    //set win stock
    vector<int> win_stocks(n_bag,0);
    if(bag[0] == 'o'){
        win_stocks[0]++;
    }
    for(int i = 1; i < n_bag; i++){
        if(bag[i] == 'o'){
            win_stocks[i] = win_stocks[i-1] + 1;
        }else{
            win_stocks[i] = win_stocks[i-1];
        }
    }
    // for(auto s : win_stocks){
    //     printf("winstock = %d\n",s);
    // }
    
    int cur_stock, left_bag;
    vector<int> get_bag(n_bag+1,0);
    // k=1で確実に食べられる袋、winstockによって後から足される
    get_bag[0] = 1;

    for(int k = 0; k < n_bag; k++){
        cur_stock = win_stocks[k];
        left_bag = n_bag - k + 1;
        for(int i = k; i < n_bag && cur_stock > 0; i++){
            cur_stock--;
            get_bag[k]++;
            if(bag[i+1] == 'o'){
                cur_stock++;
            }
        }
        get_bag[k+1] = get_bag[k];
        if(get_bag[k] > n_bag) get_bag[k] = n_bag;
    }
    
    for(int i = 0; i < n_bag; i++){
        printf("%d\n",get_bag[i]);
        
    }
	return 0;
}

