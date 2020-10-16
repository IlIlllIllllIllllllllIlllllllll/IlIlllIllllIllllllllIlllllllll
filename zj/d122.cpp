#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	long long int n;
	while (cin>>n){
		int cnt=0;
		for (int i=1;i<=13;i++){
			cnt+=n/pow(5,i);
  		}
		cout<<cnt<<'\n';
	}
	return 0;
}
