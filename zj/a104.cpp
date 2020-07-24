#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int al=sizeof(a)/sizeof(int) ,tmp;
		while (al>1){
			al--;
			for (int i=0;i<n-1;i++){
				if (a[i]>a[i+1]){
					tmp=a[i];
					a[i]=a[i+1];
					a[i+1]=tmp;
				}
			}
		}
		for (int i=0;i<n;i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
