#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>> a>> b;
	
	if (a%2 !=0 && b!=2 && b!=5 && b!=8){
		cout<<"100"<<endl;
	}
	else if (b==2 || b==5 || b==8){
		cout<<"200"<<endl;
	}
	else if (a==b && a%2==0 && b!=2 && b!=5 && b!=8){
		cout<<"50"<<endl;
	}
	else {
		cout<<"0"<<endl;
	}
	return 0;
}
