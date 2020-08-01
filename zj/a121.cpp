#include<iostream>
using namespace std;

int prime(int i){
	if (i==1){
		return 0;
	}
	else {
		for (int j=2;j*j<=i;j++){
			if (i%j==0){
				return 0;
			}
		}
		return 1;
	}
}

int main(){
	long long int a,b;
	while (cin>>a>>b){
		int counter=0;
		for (int i=a;i<=b;i++){
			if (prime(i)==1){
				counter++;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}
