#include<iostream>
using namespace std;

int main(){
	int n=0,x[100001],ps=0,ss=0,counter=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>x[i];
	}
	for (int i=0;i<n;i++){
		ps=ps+x[i];
		ss=ss+x[n-1-i];
		if (ps==ss){
			counter++;
		}
	}
	cout<<counter<<endl;
	return 0;
}
