#include<iostream>
using namespace std;

int main(){
	int h,m;
	cin>> h>> m;
	
	if (h==14 && m>=20){
		cout<<"YES"<<endl;
	}
	else if (h==15){
		cout<<"YES"<<endl;
	}
	else if (h==16 && m<=40){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}
