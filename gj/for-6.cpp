#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	for (int i=1;i<=n-1;i++){
		if (i!=1){
			cout<<" + ";
		}
		cout<<i<<'*'<<i+1;
		sum=sum+i*(i+1);
	}
	cout<<" = "<<sum<<endl;
	return 0;
}
