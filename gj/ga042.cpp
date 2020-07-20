#include<iostream>
using namespace std;

int main(){
	int m=1;
	int n,ans;
	cin>>n;
	for (int i=1;i<=n;i++){
		m=m*13;
		m=m%100;
	}
	ans=m/10;
	cout<<ans<<endl;
	return 0;
} 
