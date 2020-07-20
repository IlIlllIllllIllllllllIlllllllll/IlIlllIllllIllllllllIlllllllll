#include<iostream>
using namespace std;

const int maxn=1000003;
int a[maxn];
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]
	}
	for (int j=n;j>=1;j--){
		cout<<a[j]<<" ";
	}
	return 0;
}
