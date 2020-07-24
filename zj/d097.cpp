#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		int a[3000],d[3000]={0},x=0,ans=1;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<n-1;i++){
			x=abs(a[i+1]-a[i]);
			if (x>n-1){
				ans=0;
				break;
			}
			d[x]=1;
		}
		for (int i=1;i<=n-1;i++){
			if (d[i]==0){
				ans=0;
				break;
			}
		}
		if (ans==0){
			cout<<"Not jolly"<<endl;
		}
		else {
			cout<<"Jolly"<<endl;
		}
	}
	return 0;
}
