#include<iostream>
using namespace std;

long long unsigned int f(int n){
	return n*(n+1)*1/2;
}

long long unsigned int g(int n){
	return n*(n+1)/2*(n+2)/3;
}

int main(){
	int n;
	while (cin>>n){
		cout<<f(n)<<' '<<g(n)<<endl;
	}
	return 0;
}
