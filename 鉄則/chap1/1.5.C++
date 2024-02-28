//A05
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int cnt=0;
	for(int i=1; i<=n; i++) {
	  for(int j=1; j<=n; j++) {
	      if(i+j<k && k-(i+j)<=n) cnt++; // あまりを考えることで本来３重ループのところを２重ループにする（TLEにならない）
	  }
	}
	cout<<cnt<<endl;
}