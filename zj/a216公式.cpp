#include<iostream>
using namespace std;

long long unsigned int f(int n){
	return n*(n+1)*1/2;
}

long long unsigned int g(int n){
	while (n>0){
		if (n==1){
			return 1;
		}
		else {
			return f(n)+g(n-1);
		}
	}
}

int main(){
	int n;
	while (cin>>n){
		cout<<f(n)<<' '<<g(n)<<endl;
	}
	return 0;
}
