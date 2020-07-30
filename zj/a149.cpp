#include<iostream>
#include<cstring> //strlen()
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t>0){
		t--;
		char n[11];
		cin>>n;
		int pro=1;
		for (int i=0;i<strlen(n);i++){
			pro*=(int)n[i]-(int)'0';
		}
		cout<<pro<<endl;
	}
	return 0;
}
