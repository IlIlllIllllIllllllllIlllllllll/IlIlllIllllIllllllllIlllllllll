//TLE
#include<iostream>
using namespace std;

int cl(long long int n){
	int ans=1;
	while (n!=1){
		if (n%2 == 0){
			n=3*n+1;
		}
		else {
			n=n/2;
		}
		ans++;
	}
	return ans;
}

int main(){
	int i,j,tmp;
	while (cin>>i>>j){
		cout<<i<<' '<<j<<' ';
		if (i>j){ //make (i<=j)
			tmp=i;
			i=j;
			j=tmp;
		}
		int max=0,ans;
		for (;i<=j;i++){
			ans=cl(i);
			if (ans>max){
				max=ans;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
