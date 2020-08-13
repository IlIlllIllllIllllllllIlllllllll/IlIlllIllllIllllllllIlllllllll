#include<iostream>
#include<string> //stoi(),isdigit()
#include<sstream>
using namespace std;

int check(string s){
	bool check=1;
	int x;
	for (int i=0;i<s.length();i++){
		if (isdigit(s[i])==0){
			check=0;
		}
	}
	if (check){
		x=stoi(s);
		return x;
	}
	else {
		return 0;
	}
}

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	for (string s;getline(cin,s);){
		stringstream ss(s);
		int sum=0;
		while (ss>>s){
			int x=check(s);
			sum+=x;
		}
		cout<<sum<<'\n';
	}
	return 0;
}
