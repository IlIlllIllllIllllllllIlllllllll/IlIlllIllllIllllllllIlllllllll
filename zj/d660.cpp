#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int T;
	cin>>T;
	for (int i=1;i<=T;i++){
		int n,hsum=0,lsum=0;
		cin>>n;
		vector<int> a={-100000};
		for (int j=0;j<n;j++){
			int tmp;
			cin>>tmp;
			int x=a.back();
			a.push_back(tmp);
			if (a.back()>x){
				hsum++;
			}
			else if (a.back()<x){
				lsum++;
			}
		}
		cout<<"Case "<<i<<": "<<hsum-1<<' '<<lsum<<'\n';
	}
	return 0;
}
