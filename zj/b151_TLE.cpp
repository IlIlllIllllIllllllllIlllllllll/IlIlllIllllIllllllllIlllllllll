#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long int ans(vector<int> &a){
	long long int sum=0;
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
	return sum;
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> a;
	for (int i=0,tmp;i<n;i++){
		cin>>tmp;
		a.push_back(tmp);
	}
	sort(a.begin(),a.end());
//	int sum=0;
//	while (a.size()>1){
//		int tmp=0;
//		tmp+=a.front();
//		a.erase(a.begin());
//		tmp+=a.front();
//		a.erase(a.begin());
//		a.push_back(tmp);
//		sort(a.begin(),a.end());
//		sum+=tmp;
//	}
	cout<<ans(a)<<'\n';
	return 0;
}
