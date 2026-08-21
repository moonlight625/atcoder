#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int stores;
    int money = 10000;
    cin >> stores;

    int cur_cash = 10000;
    int take_change_cash = 10000;

    for(int i = 0; i < stores; i++){
        int price, pay, change;
        string action;
        cin >> price >> pay >> action;
        change = pay - price;

        if(action == "keep"){
            cur_cash -= pay;
            take_change_cash -= pay;
            take_change_cash += change;
        }else if(action == "take"){
            cur_cash -= pay; 
            cur_cash += change;
            take_change_cash -= pay;
            take_change_cash += change;
        }
    }

    cout << take_change_cash - cur_cash << endl;

	return 0;
}