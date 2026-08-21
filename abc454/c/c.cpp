#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

struct item
{
    int give_item;//自分が渡すアイテム（A)
    int get_item;//自分がもらうアイテム（B)
};


int main(){
    int n, m;
    cin >> n >> m;

    int c = 0;

    vector<item> friends(m,{-1, -1});
    vector<bool> got_item(n, false);
    got_item[0] = true;

    stack<item> st;

    //input
    for(int i = 0; i < m; i++){
        cin >> friends[i].give_item >> friends[i].get_item;
        friends[i].give_item--;
        friends[i].get_item--;
    }

    //stackの構築
    for(int i = 0; i < m; i++){
        if(friends[i].give_item == 0){
            st.push(friends[i]);
        }
    }

    //dfsで探索する
    while(!st.empty()){
        //取り出しと消去
        item e = st.top();
        st.pop();

        //スタックに入っているものはもらえるのでtrueに
        if(got_item[e.get_item] == false){
            got_item[e.get_item] = true;
        }

        //getがgiveになってるものをfriendsから探索する
        for(auto x : friends){
            if(e.get_item == x.give_item){
                st.push(x);
            }
        }
    }

    for(bool can_get : got_item){
        if(can_get){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}