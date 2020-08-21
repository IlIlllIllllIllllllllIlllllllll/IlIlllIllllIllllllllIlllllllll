#include <iostream>
#include <map>
using namespace std;

int next_number(int n){
	int sum=0;
	while (n>0){
		sum+=(n%10)*(n%10);
		n/=10;
	}
	return sum;
}

void solve(){
	map<int,int> mp; // initialize mp
	int n;
	cin>>n;
	int ans=n;
	while (n!=1 && mp[n]==0){
		mp[n]=1;
		n=next_number(n);
	}
	if (n==1){
		cout<<ans<<" is a Happy number."<<'\n';
	}
	else {
		cout<<ans<<" is an Unhappy number."<<'\n';
	}
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int line;
	cin>>line;
	for (int i=1;i<=line;i++){
		cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
