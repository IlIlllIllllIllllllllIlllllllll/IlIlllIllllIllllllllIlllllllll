#include<iostream>
using namespace std;

int main(){
	long long int l,a;
	while (cin>>l){
		if (l/2%2==0){
			cout<<l/4*l/4<<endl;
		}
		else {
			a=l/4;
			cout<<(a+1)*a<<endl;
		}
	}
	return 0;
}
