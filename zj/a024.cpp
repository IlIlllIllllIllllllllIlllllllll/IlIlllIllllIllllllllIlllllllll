#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
	if (b>0) {
		return gcd(b,a%b);
	} else return a;
}

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<'\n';
	return 0;
}
