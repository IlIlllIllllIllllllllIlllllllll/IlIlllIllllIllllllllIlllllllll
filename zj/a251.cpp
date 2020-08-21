#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int ff(vector<int> a,int j){
	return a[j-4]+a[j-1];
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int l;
	cin>>l;
	for (int i=l,n;i>0;i--){
		cin>>n;
		vector<int> a;
		for (int j=0,tmp;j<4;j++){
			cin>>tmp;
			a.push_back(tmp);
		}
		for (int j=4;j<n;j++){
			a.push_back(ff(a,j));
		}
		sort (a.begin(),a.end());
		cout<<a[n/2]<<'\n';
	}
	return 0;
}
