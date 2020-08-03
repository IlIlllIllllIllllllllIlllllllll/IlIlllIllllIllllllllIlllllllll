#include<iostream>
using namespace std;

long long int c(int n,int m){
	int pro_numerator=1;
	for (int i=n;i>=m+1;i--){
		pro_numerator*=i;
	}
	int pro_denominator=1;
	for (int i=n-m;i>=1;i--){
		pro_denominator*=i;
	}
	return pro_numerator/pro_denominator;
}

int main(){
	int n,m;
	while (cin>>n>>m){
		cout<<c(n,m)<<endl;
	}
}
