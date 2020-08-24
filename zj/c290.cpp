#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	string s;
	while (cin>>s){
		int A=0,B=0;
		for (int i=0;i<s.length();i++){
			if (i%2==1){
				A+=s[i]-'0';
			}
			else{
				B+=s[i]-'0';
			}
		}
		cout<<abs(A-B)<<'\n';
	}
	return 0;
}
