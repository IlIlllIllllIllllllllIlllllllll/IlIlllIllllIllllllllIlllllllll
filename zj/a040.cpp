#include<iostream>
using namespace std;

int main(){
	int n,m;
	bool ok=0;
	cin>>n>>m;
	for (int i=n;i<=m;i++){
		int l=0;
		int tmp=i;
		while (tmp>0){
			tmp/=10;
			l++;
		}
		int sum=0;
		tmp=i;
		while (tmp>0){
			int d=tmp%10;
			int p=1;
			for (int j=1;j<=l;j++){
				p=p*d;
			}
			sum+=p;
			tmp/=10;
		}
		if (i==sum){
			ok=1;
			cout<<sum<<' ';
		}
	}
	if (ok==0){
		cout<<"none";
	}
	return 0;
}
