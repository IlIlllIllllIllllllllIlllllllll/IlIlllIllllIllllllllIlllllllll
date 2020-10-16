#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	for (int i=0; i<n; i++) {
		int e,f,c;
		cin>>e>>f>>c;
		int all=e+f;
		int cnt=0;
		while(all/c) {
			cnt+=all/c;
			all=all/c+all%c;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
