#include <iostream>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n,m;
	while (cin>>n>>m){
		int a[n][m];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int sum=0;
		vector<int> vec;
		vector<int> ans;
		for (int i=0;i<n;i++){
			int i_max=0;
			for (int j=0;j<m;j++){
				if (a[i][j]>i_max){
					i_max=a[i][j];
				}
			}
			vec.push_back(i_max);
			sum+=i_max;
		}
		cout<<sum<<'\n';
		for (int i=0;i<(int)vec.size();i++){
			if (sum%vec[i]==0){
				ans.push_back(vec[i]);
			}
		}
		if (ans.empty()){
			cout<<-1<<'\n';
		}
		else {
			for (int i=0;i<(int)ans.size();i++){
				cout<<ans[i];
				(i==(int)ans.size()-1)?cout<<'\n':cout<<' ';
			}
		}
	}
	return 0;
}
