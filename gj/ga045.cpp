#include<iostream>
using namespace std;

int main(){
	int n=0;
	bool ans=1;
	cin>>n;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			ans=0;
			break;
		}	
	}
	if (ans==0){
		cout<<"NO"<<endl;
	}
	else if(ans==1){
		cout<<"YES"<<endl;
	}
	return 0;
}
