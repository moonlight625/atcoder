#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
	int box_capacity, balls;
    cin >> box_capacity >> balls;

    vector<int> box_info(box_capacity,0), put_ball(box_capacity);
    int min_box_index = 0;
    int ball;
    for(int i = 0; i < balls; i++){
        cin >> ball;
        if(ball == 0){
            box_info[min_box_index]++;
            put_ball.push_back(min_box_index);

            min_box_index = min_element(box_info.begin(), box_info.end()) - box_info.begin();
        }else{
            box_info[ball-1]++;
            put_ball.push_back(ball);
        }

        
    }

	return 0;
}