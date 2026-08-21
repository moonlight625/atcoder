#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

enum{
    A,
    B,
    C,
    D,
    E,
};

int main(){
	int trains_number;
    char seat_line;
    cin >> trains_number >> seat_line;

    bool seat_is_empty = false;

    string seats;
    for(int train = 0; train < trains_number; train++){
        cin >> seats;

        if(seats[seat_line - 'A'] == 'o'){
            seat_is_empty = true;
            break;
        }


    }

    if(seat_is_empty){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
	return 0;
}