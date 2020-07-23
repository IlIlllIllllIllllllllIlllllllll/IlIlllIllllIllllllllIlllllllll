#include<iostream>
using namespace std;

int main(){
	int n,m,l,r,a[100001],sum[100001];
	while (cin>>n>>m){
		sum[100001]={0,};
		for (int i=1;i<=n;i++){
			cin>>a[i-1];
			sum[i]=sum[i-1]+a[i-1];
		}
		for (int i=1;i<=m;i++){
			cin>>l>>r;
			cout<<sum[r]-sum[l-1]<<endl;
		}
	}
	return 0;
}
