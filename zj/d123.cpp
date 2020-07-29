#include<iostream>
using namespace std;

int b2(int n,int a[]){
	int check[20000]={0};
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){ //j is allowed to ==i
			if (check[a[i]+a[j]]==0){
				check[a[i]+a[j]]=1;
			}
			else if (check[a[i]+a[j]]==1){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int n,x=1;
	while (cin>>n){
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=b2(n,a);
		if (ans==1){
			cout<<"Case #"<<x<<": It is a B2-Sequence."<<endl;
		}
		else {
			cout<<"Case #"<<x<<": It is not a B2-Sequence."<<endl;
		}
		x++;
	}
	return 0;
}
