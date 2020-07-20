#include<iostream>
using namespace std;

int main(){
	int n;
	bool ans=1;
	cin>>n;
	if (n==1){
		cout<<"你自己加油";
	}
	else {
		for (int i=2;i*i<=n;i++){
			if (n%i==0){
				ans=0;
			}
		}
		cout<<ans;
	}
	return 0;
}
