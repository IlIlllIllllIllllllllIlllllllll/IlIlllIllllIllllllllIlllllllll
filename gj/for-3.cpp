#include<iostream>
using namespace std;

int main(){
	int n,r;
	int m=1;
	cin>>n>>r;
	for (int i=n;i>n-r;i--){
		m=m*i;
	}
	cout<<m<<endl;
	return 0;
}
