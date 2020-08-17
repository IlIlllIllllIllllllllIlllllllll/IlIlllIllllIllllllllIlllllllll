#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main (){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	for (int i=n;i>0;i--){
		string s;
		cin>>s;
		long long int cnt=0;
		stack<char> stk;
		for (int j=0;j<s.length();j++){
			if (s[j]=='p'){
				stk.push('p');
			}
			else if (s[j]=='q'){
				if (stk.top()=='p'){
					cnt++;
					stk.pop();
				}
			}
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
