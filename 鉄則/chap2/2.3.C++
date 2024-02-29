//A08
#include <bits/stdc++.h>
using namespace std;

int h,w,q;
int x[1509][1509],z[1509][1509];  // h<=1500,w<=1500やからちょいオーバーくらいに設定しておく
int a[100009],b[100009],c[100009],d[100009]; //こっちも同様でq<=100000くらいやからオーバーで設定する 


int main() {
	cin>>h>>w;
	for(int i=1; i<=h; i++) {
	  for(int j=1; j<=w; j++) cin>>x[i][j]; // 1-index(累積和の問題はそれの方が都合がいい)
	}
	
	cin>>q;
	for(int i=1; i<=q; i++) cin>>a[i]>>b[i]>>c[i]>>d[i];
	
	for(int i=0; i<h; i++) {
	  for(int j=0; j<w; j++) z[i][j]=0; // 最初は全部０で初期化（累積和は０番目は０にして始めるのがセオリー）
	}
	
	for(int i=1; i<=h; i++) {
	  for(int j=1; j<=w; j++) z[i][j]=z[i][j-1]+x[i][j]; // 横方向に累積和
	} 
	
	for(int i=1; i<=h; i++) {
	  for(int j=1; j<=w; j++) z[i][j]=z[i-1][j]+z[i][j]; // 縦方向に累積和
	}
	
	for(int i=1; i<=q; i++) {
	  cout<<z[c[i]][d[i]]+z[a[i]-1][b[i]-1]-z[a[i]-1][d[i]]-z[c[i]][b[i]-1]<<endl; //左上(a,b)右下(c,d)の長方形領域に書かれた数の和
	}
}

