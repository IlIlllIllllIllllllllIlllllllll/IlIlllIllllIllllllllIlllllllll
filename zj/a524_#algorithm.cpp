#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n) {
		int a[n];
		for (int i=1; i<=n; i++) {
			a[i-1]=i;
		}
		sort(a,a+n);
		reverse(a,a+n);
		do {
			for (int i=0; i<n; i++) {
				cout<<a[i];
			}
			cout<<'\n';
		} while (prev_permutation(a,a+n));
	}
	return 0;
}
