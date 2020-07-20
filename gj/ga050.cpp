#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,ans=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			ans=i*j;
			cout<<j<<'x'<<i<<'='<<setw(2)<<ans<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
