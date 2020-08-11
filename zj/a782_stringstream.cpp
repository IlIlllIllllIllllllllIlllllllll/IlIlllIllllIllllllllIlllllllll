#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string input;
	while (getline(cin,input)&& input!="END"){
		stringstream ss(input);
		string ans,s,last_s;
		while (ss>>s){
			ans.push_back(toupper(s[0]));
			last_s=s;
		}
		cout<<ans<<' '<<last_s<<endl;
	}
	return 0;
}
