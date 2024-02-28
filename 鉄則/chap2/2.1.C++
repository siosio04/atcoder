// A06
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	int a[n],s[n+1],l[q],r[q];   // 配列を初期化　（vector<int>を用いない方法）
	for(int i=0; i<n; i++) cin>>a[i];
	for(int j=0; j<q; j++) cin>>l[j]>>r[j];
	
    //累積和
	s[0]=0;
	for(int i=0; i<n; i++) s[i+1]=s[i]+a[i];
	
	for(int j=0; j<q; j++) {
	  cout<<s[r[j]]-s[l[j]-1]<<endl;
	}
}

//B06
