#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		cin.ignore();
		for (int i=0;i<n;i++){
			string input;
			getline(cin,input);
			stringstream ss(input);
			int inputnum;
			vector<int> a;
			while (ss>>inputnum){
				a.push_back(inputnum);
			}
			int maxgcd=0;
			for (int j=0;j<a.size();j++){
				for (int k=j+1;k<a.size();k++){
					maxgcd=max(maxgcd,__gcd(a[j],a[k]));
				}
			}
			cout<<maxgcd<<'\n';
		}
	}
	return 0;
}
