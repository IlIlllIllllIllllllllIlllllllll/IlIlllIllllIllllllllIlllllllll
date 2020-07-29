#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while (n%10==0){ // from the last one, once n%10!=0, leave this loop
		n/=10;
		if (n==0){
			cout<<'0';
			break;
		}
	}
	while (n>0){
		cout<<n%10;
		n/=10;
	}
	return 0;
}
