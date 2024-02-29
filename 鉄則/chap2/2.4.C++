//A09
#include <bits/stdc++.h>
using namespace std;

int h,w,n;
int a[100009],b[100009],c[100009],d[100009];
int x[1509][1509],z[1509][1509];

int main() {
	cin>>h>>w>>n;
	for(int i=1; i<=n; i++) cin>>a[i]>>b[i]>>c[i]>>d[i];
	
	for(int i=1; i<=n; i++) {
	  x[a[i]][b[i]]++;  //前日比みたいなものを作ってそのあと累積和をとる
	  x[c[i]+1][d[i]+1]++;
	  x[a[i]][d[i]+1]--;
	  x[c[i]+1][b[i]]--;
	}

  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) z[i][j]=0;
  }
  
  for(int i=1; i<=h; i++) {
    for(int j=1; j<=w; j++) z[i][j]=z[i][j-1]+x[i][j];
  }
  
  for(int i=1; i<=h; i++) {
    for(int j=1; j<=w; j++) z[i][j]=z[i-1][j]+z[i][j];
  }
  
  for(int i=1; i<=h; i++) {
    for(int j=1; j<=w; j++) {
      if(j>=2) cout<<" ";
      cout<<z[i][j]; // 空白区切りで出力    
    }
    cout<<endl;
  }
  /*
        1 2 3 4 5
        6 7 8 9 0 みたいな感じで出力される
  */
}