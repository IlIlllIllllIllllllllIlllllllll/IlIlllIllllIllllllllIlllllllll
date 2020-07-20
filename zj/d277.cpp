#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		if (n%2==0){
			cout<<n<<endl;
		}
		else if (n==1){
			cout<<0<<endl;
		}
		else {
			cout<<n-1<<endl;
		}
	}
	return 0;
}
