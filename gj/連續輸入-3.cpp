#include<iostream>
using namespace std;

int main(){
	int a,b=0;
	while (cin>>a>>b){
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
