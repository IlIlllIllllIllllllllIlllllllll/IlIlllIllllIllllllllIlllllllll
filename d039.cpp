#include<iostream>
using namespace std;

int main(){
	int t,n,m,a1,a2;
	cin>>t;
	while (t--){
		cin>>n>>m;
		a1=n/3;
		a2=m/3;
		cout<<a1*a2<<endl;
	}
	return 0;
}
