//A07
#include <bits/stdc++.h>
using namespace std;

int main() {
	int d,n;
	cin>>d>>n;
	int b[100009],ans[100009];
	int l[100009],r[100009];
	for(int i=1; i<=n; i++) cin>>l[i]>>r[i];
	
	//前日比の配列
	for(int i=1; i<=n; i++) {
	  b[l[i]]++;
	  b[r[i]+1]--;
	}
	//累積和をとって出力
	ans[0]=0;
	for(int i=1; i<=d; i++) ans[i]=ans[i-1]+b[i];
	for(int i=1; i<=d; i++) cout<<ans[i]<<endl;
	
}