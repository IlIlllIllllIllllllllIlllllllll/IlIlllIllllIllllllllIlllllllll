#include<iostream>
using namespace std;

int main(){
	long long int n;
	while (cin>>n){
		long long int a[1024]={0},b=0; //a[x]:x(upup) can increase the maximum and the accuracy of n
		while (1){
			a[b]=n%2;
			n=n/2;
			if (n==0){
				break;
			}
			b++;
		}
		for (;b>=0;b--){
			cout<<a[b];
		}
		cout<<endl;
	}
	return 0;
}
