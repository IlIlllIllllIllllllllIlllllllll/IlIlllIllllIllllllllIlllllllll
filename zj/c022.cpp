#include<iostream>
using namespace std;

int main(){
	int n,a,b,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a>>b;
		for (int j=a;j<=b;j++){
			if (j%2==1){
				sum=sum+j;
			}
		}
		cout<<"Case "<< i<<": "<<sum<<endl;
		sum=0;
	}
	return 0;
} 
