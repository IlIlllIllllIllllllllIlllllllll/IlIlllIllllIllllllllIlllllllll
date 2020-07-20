#include<iostream>
using namespace std;

int main(){
	int a,b,p=0;
	cin>> a>> b;
	
	if (a%2 !=0){
		p=p+100;
	}
	if (b==2 || b==5 || b==8){
		p=p+200;
	}
	if (a==b){
		p=p+50;
	}
	cout<<p<<endl;
	return 0;
}
