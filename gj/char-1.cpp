#include<iostream>
using namespace std;

int main(){
	int a,b=0;
	char x;
	cin>>a>>x>>b;
	if (x=='+'){
		cout<< a+b<< endl;
	}
	else if (x=='-'){
		cout<< a-b<< endl;
	}
	else if (x=='*'){
		cout<< a*b<< endl;
	}
	return 0;
}
