#include<iostream>
using namespace std;

int main(){
	unsigned int n,a[101],max=0,min=10000000;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>=max){
			max=a[i];
		}
		if (a[i]<=min){
			min=a[i];
		}
	}
	if (max-min==n-1){
		cout<<min<<' '<<max<<" yes"<<endl;
	}
	else {
		cout<<min<<' '<<max<<" no"<<endl;
	}
	return 0;
}
