#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main(int argc, char *argv[]) {
  //入力
  int city_length, number_of_building, max_of_building;
  cin >> city_length >> number_of_building >> max_of_building;


  //街の地図を二次元配列として、建物を建てるなら1タス
  vector<vector<int>> map_of_city(city_length, vector<int>(city_length,0));
  for(int i = 0; i < number_of_building; i++){
    int a,b;
    cin >> a >> b;
    map_of_city[a-1][b-1]++;
  }

  //各区画の建物の数をかぞえてk以下か見る
  int number_of_building_in_block;
  bool number_is_ok = true;

  for(int x = 0; x+1 < city_length; x++){
    number_of_building_in_block = 0;
    for(int y = 0; y+1 < city_length; y++){
      number_of_building_in_block += map_of_city[x][y];
      number_of_building_in_block += map_of_city[x+1][y];
      number_of_building_in_block += map_of_city[x][y+1];
      number_of_building_in_block += map_of_city[x+1][y+1];
    }

    if(number_of_building_in_block > max_of_building){
      number_is_ok = false;
      break;
    }
  }

  if(number_is_ok){
    cout << "yes" << endl;
  }else{
    cout << "no" << endl;
  }


  return 0;
}