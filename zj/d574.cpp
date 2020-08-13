#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n){
		string s;
		cin>>s;
		stringstream ss;
		s.push_back('$');
		for (int i=1,cnt=1;i<=n;i++){
			if (s[i-1]!=s[i]){
				ss<<cnt<<s[i-1];
				cnt=1;
			}
			else {
				cnt++;
			}
		}
		string ans=ss.str();
		s.pop_back(); //to recover to original s.size()
		if (ans.size()<s.size()){
			cout<<ans<<'\n';
		}
		else {
			cout<<s<<'\n';
		}
	}
	return 0;
}
