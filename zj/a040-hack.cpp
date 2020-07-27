#include<iostream>
using namespace std;

int main(){
	int a[20]={1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084,548834};
	int n,m;
	bool ok=0;
	cin>>n>>m;
	for (int i=0;i<20;i++){
		if (a[i]>=n && a[i]<=m){
			cout<<a[i]<<' ';
			ok=1;
		}
	}
	if (ok==0){
		cout<<"none";
	}
	return 0;
}
