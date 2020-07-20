#include<iostream>
using namespace std;

int main(){
	int n,k;
	while (cin>>n>>k){
		if (k==0){
			if (n==0){
				cout<<"Ok!"<<endl;
			}
			else {
				cout<<"Impossib1e!"<<endl;
			}
		}
		else {
			if (n==0){
				cout<<"Ok!"<<endl;
			}
			else if (n%k==0 && n!=0){
				cout<<"Ok!"<<endl;
			}
			else {
				cout<<"Impossib1e!"<<endl;
			}
		}
	}
	return 0;
}
