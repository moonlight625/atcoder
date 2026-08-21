#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

/*
円周上の点を代入すると4本式ができてわからん変数も4つなので連立方程式すれば解けそう?

未知数: a,b,r1,r2
既知数: 円周上の点x,y（p、q,r,sとして与えられる）

円の公式に入れて、定数を右辺、それ以外を左辺にやってそれぞれの円でまとめると円の中心に関する2連1次方程式になる。
*/
struct Point
{
    int x;
    int y;
};


void set_vec(vector<vector<int>> &c){
    Point p,q,r,s;
    cin >> p.x >> p.y >> q.x >> q.y >> r.x >> r. y >> s.x >> s.y;

    c[0][0] = 2 * (p.x - q.x);
    c[0][1] = 2 * (p.y - q.y);
    c[0][2] = p.x*p.x + p.y*p.y + q.x*q.x + q.y*q.y;
    c[1][0] = 2 * (r.x - s.x);
    c[1][1] = 2 * (r.y - s.y);
    c[1][2] = r.x*r.x + r.y*r.y + s.x*s.x + s.y*s.y;
}

Point calc(vector<vector<int>> &c){
    Point center;
    center.x = 
}

int main(){
	int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<vector<int>> c(2, vector<int>(3));
        set_vec(c);
    }
	return 0;
}