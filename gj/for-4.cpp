#include<iostream>
using namespace std;

int main(){
	int a,b,m=0;
	cin>>a>>b;
	cout<<a;
	for (int j=a+1;j<=b;j++){
		cout<<'+'<<j;
	}
	for (int i=a;i<=b;i++){
		m=m+i;
	}
	cout<<'='<<m<<endl;
	return 0;
}
