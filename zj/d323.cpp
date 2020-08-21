#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> a;
	for (int i=0,e;i<n;i++){
		cin>>e;
		a.push_back(e);
	}
	sort (a.begin(),a.end());
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
