#include<iostream>
using namespace std;

int main(){
	int n,a[100001],counter=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0,p1=0,j=0,p2=0;i<n;i++){
		p1+=a[i];
		while (p2*2<p1){
			p2+=a[j];
			j++;
		}
		if (p2*2==p1){
			counter++;
		}
	}
	cout<<counter<<endl;
	return 0;
}
/*
5
1 2 3 5 1
*/
