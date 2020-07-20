#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if (a>=0 && a<=5){
		cout<<0<<endl;
	}
	else if (a>=6 && a<=11){
		cout<<590<<endl;
	}
	else if (a>=12 && a<=17){
		cout<<790<<endl;
	}
	else if (a>=18 && a<=59){
		cout<<890<<endl;
	}
	else {
		cout<<399<<endl;
	}
	return 0;
}
