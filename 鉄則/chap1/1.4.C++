//A04
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=9; i>=0; i--) {
	  int wari=(1<<i);
	  cout<<(n/wari)%2; 
	}
}

//B04
#include <iostream>
#include <string>
using namespace std;
 
int main() {
	// 入力
	string N;
	cin >> N;
	
	// 答えを求める
	int Answer = 0;
	for (int i = 0; i < N.size(); i++) {
		int keta;
		int kurai = (1 << (N.size() - 1 - i));
		if (N[i] == '0') keta = 0;
		if (N[i] == '1') keta = 1;
		Answer += keta * kurai;
	}
	
	// 出力
	cout << Answer << endl;
	return 0;
}