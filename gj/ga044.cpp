#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	for (int i=1;i<n;i++){
		if (n%i==0){
			sum=sum+i;
		}
	}
	if (sum>n){
		cout<<"Abundant"<<endl;
	}
	else if (sum<n){
		cout<<"Deficient"<<endl;
	}
	else {
		cout<<"Perfect"<<endl;
	}
	return 0;
} 
