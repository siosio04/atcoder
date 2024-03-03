#include <bits/stdc++.h>
using namespace std;
int d[45][45];  // mainの外側に書いてあるやつは前提条件として扱われるので変数とか関係ないものは外に書くと高速化につながる
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main() {
	int n; cin>>n;
    d[0][0]=1;
    int x=0,y=0; //初期位置
    int k=1; //最初の進行方向は右側
    int cnt=1; //パーツの番号

    while(cnt<n*n) {
        int xx=x+dx[k],yy=y+dy[k]; //移動後の位置
        if(0<=xx && xx<n && 0<=yy && yy<n && d[xx][yy]==0) { //グリッド内にいてその位置が初期の数字か（０か）
            d[xx][yy]=++cnt; //都度1ずつ増やして数字を格納
            x=xx, y=yy; //移動後の位置を現在の位置とする
        }else{
            k=(k+1)%4; //進行方向を90度右に回転させる（方向が4つあるため4で割ったあまりを使う）
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j)cout<<" ";
            if(d[i][j]==n*n) cout<<"T"; // グリッドの中心に高橋くんを配置する
            else cout<<d[i][j];
        }
        cout<<endl;
    }
}