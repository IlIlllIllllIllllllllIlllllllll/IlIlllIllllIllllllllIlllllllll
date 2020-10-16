#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int T;
	cin>>T;
	for (int i=0;i<T;i++){
		int n;
		cin>>n;
		int a[n];
		for (int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a,a+n);
		if (n%2==1){
			cout<<a[n/2]<<'\n';
		}
		else {
			cout<<a[n/2-1]<<'\n';
		}
	}
	return 0;
}
