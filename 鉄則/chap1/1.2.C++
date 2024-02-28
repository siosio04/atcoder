// A02
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,a;
	cin>>n>>x;
	string ans="No";
  for(int i=0; i<n; i++) {
	  cin>>a;
	  if(a==x) {
	    ans="Yes";
	    break;
	  }
  }
  cout<<ans<<endl;
}

// B02
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	string ans="No";
	for(int i=a; i<=b; i++) {
	  if(100%i==0) ans="Yes";
	}
	cout<<ans<<endl;
}