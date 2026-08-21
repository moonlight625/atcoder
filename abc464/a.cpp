#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	string people;
    cin >> people;
    int east_men = 0, west_men = 0;

    for(int i = 0; i < people.size(); i++){
        if(people[i] == 'E'){
            east_men++;
        }else{
            west_men++;
        }
    }

    if(east_men > west_men){
        cout << "East\n";
    }else{
        cout << "West\n";
    }
    
	return 0;
}