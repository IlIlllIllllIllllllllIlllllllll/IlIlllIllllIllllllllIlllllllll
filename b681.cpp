#include<iostream>
using namespace std;

int main(){
	long long int l;
	while (cin>>l){
		if (l>0){
			cout<<2*l-1<<endl;
		}
		else {
			cout<<2*(-1)*l<<endl;
		}
	}
	return 0;
}
