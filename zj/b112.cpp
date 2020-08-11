#include<iostream>
using namespace std;

int gcd(int a,int b){ //輾轉相除法
	if (b==0){
		return a;
	}
	else {
		return gcd(b,a%b);
	}
}

int main(){
	int n;
	while (cin>>n){
		int a[n],ans;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		ans=gcd(a[0],a[1]);
		for (int i=2;i<n;i++){
			ans=gcd(ans,a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
