#include<iostream>
using namespace std;

int main(){
	int n;
	unsigned long long int f[100]={1,1};
	
	for (int i=2;i<100;i++){ //從第三項開始存進陣列 
		f[i]=f[i-1]+f[i-2];
	}
	while (cin>>n){
		cout<<f[n]<<endl;
	}
	return 0;
} 
