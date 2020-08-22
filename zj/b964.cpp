#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int high_fail,low_pass,cnt=0;
	for (int i=0;i<n;i++){
		cout<<a[i];
		(i==n-1)?cout<<'\n':cout<<' ';
		if (a[i]>=60){
			cnt++;
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]>=60){
			high_fail=a[i-1];
			low_pass=a[i];
			break;
		}
	}
	if (cnt==0){
		high_fail=a[n-1];
	}
	if (cnt==n){
		cout<<"best case";
	}
	else {
		cout<<high_fail;
	}
	cout<<'\n';
	if (cnt==0){
		cout<<"worst case";
	}
	else {
		cout<<low_pass;
	}
	return 0;
}
