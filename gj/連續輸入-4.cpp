#include<iostream>
using namespace std;

int main(){
	int a,b,n,counter=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a>>b;
		cout<<"Case "<< i<< ": ";
		if (a>b){
			cout<<"A "<< a-b<< endl;
		}
		else if (a<b){
			cout<<"B "<< b-a<< endl;
		}
		else {
			cout<<0<<endl;
		}
	}
	return 0;
}
