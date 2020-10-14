#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	using ll=long long;
	priority_queue<ll,vector<ll>,greater<ll>> pq;
	for (int i=0,tmp;i<n;i++){
		cin>>tmp;
		pq.push(tmp);
	}
	ll ans=0;
	while (pq.size()>1){
		int x=pq.top();
		pq.pop();
		ans+=x;
		int y=pq.top();
		pq.pop();
		ans+=y;
		pq.push(x+y);
	}
	cout<<ans<<'\n';
	return 0;
}
