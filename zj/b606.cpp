#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n && n!=0){
		vector<int> a;
		for (int i=0,tmp;i<n;i++){
			cin>>tmp;
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		int sum=0;
		while (a.size()>1){
			int tmp=0;
			tmp+=a.front();
			a.erase(a.begin());
			tmp+=a.front();
			a.erase(a.begin());
			a.push_back(tmp);
			sort(a.begin(),a.end());
			sum+=tmp;
		}
		cout<<sum<<'\n';
	}
	return 0;
}
