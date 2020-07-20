#include<iostream>
using namespace std;

int main(){
	int n=9;
	for (int i=n;i>=1;i--){
		if (i%2==0 || i%3==0){
			continue;
		}
		for (int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for (int i=2;i<=n;i++){
		if (i%2==0 || i%3==0){
			continue;
		}
		for (int j=0;j<i;j++){	
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
