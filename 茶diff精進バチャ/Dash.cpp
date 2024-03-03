#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,h,k; string s; cin>>n>>m>>h>>k>>s;
    string ans="No";
    int x=0,y=0;
    set<pair<int,int>> st; // setは重複の無いデータのまとまりを扱うためのデータ型(計算量O(logN)), pairは組を作るもの

    for(int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        st.insert({a,b}); // stに{a,b}という組を入れていく
    }
    int nx=0,ny=0;
    for(int j=0; j<n; j++) {
        x=0, y=0; // j回目の移動の際に動く方向を決める
        if(s[j]=='R') x=1;
        if(s[j]=='L') x=-1;
        if(s[j]=='U') y=1;
        if(s[j]=='D') y=-1;
        nx+=x,ny+=y; //移動後の座標
        h--;
        if(h<0) break;
        if(h<k && st.count({nx,ny})) { // stの中に{nx,ny}という組があるか(あればtrue)
        h=k;
        st.erase({nx,ny}); // stの中にある{nx,ny}という組を削除する
        }
    }
    if(h>=0) ans="Yes";
    cout<<ans<<endl;
}