#include<iostream>
using namespace std;

int main(){
	int n,x;
	char a='_';
	cin>>n;
	for (int i=1;i<=n;i++){
		x=i;
		for (int k=n-1;k>=i;k--){
			cout<<a;
		}
		for (int j=1;j<=2*i-1;j++){
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
} 
