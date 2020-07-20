#include<iostream>
using namespace std;

int main(){
	int a,b,m=0;
	cin>>a>>b;
	if (a<b){
		for (int j=a;j<=b;j++){
			if (j!=a){
				cout<<'+';
			}
			cout<<j;
			m=m+j;
		}
		cout<<'='<<m<<endl;
	}
	else if (a>b){
		cout<<a;
		for (int j=a-1;j>=b;j--){
			cout<<'+'<<j;
		}
		for (int i=a;i>=b;i--){
			m=m+i;
		}
		cout<<'='<<m<<endl;
	}
	else {
		cout<<a;
		cout<<'='<<a<<endl;
	}
	return 0;
}
