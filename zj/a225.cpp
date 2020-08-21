#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n){
		vector<int> a;
		vector<int> ans;
		for (int i=0,e;i<n;i++){
			cin>>e;
			a.push_back(e);
		}
		sort (a.begin(),a.end());
		for (int i=0;i<=9;i++){
			for (int j=n-1;j>=0;j--){
				if (a[j]%10==i){
					ans.push_back(a[j]);
				}
			}
		}
		for (int i=0;i<n;i++){
			cout<<ans[i];
			(i==n-1)?cout<<'\n':cout<<' ';
		}
	}
	return 0;
}
