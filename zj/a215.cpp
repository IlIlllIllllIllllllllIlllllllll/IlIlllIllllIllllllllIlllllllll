#include<iostream>
using namespace std;

int main(){
	int n,m,sum=0,t=0;
	while(cin>>n>>m){
		do{
			sum=sum+n;
			n++;
			t++;
		}while (sum<=m);
		cout<<t<<endl;
		n=0;
		m=0;
		sum=0;
		t=0;
	}
	return 0;
}
