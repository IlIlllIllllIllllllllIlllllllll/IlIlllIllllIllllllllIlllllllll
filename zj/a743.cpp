#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main (){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	cin.ignore();
	map<string,int> cnt;
	for (int i=0;i<n;i++){
		string input;
		getline(cin,input);
		stringstream ss(input);
		string s;
		ss>>s;
		cnt[s]++;
	}
	//auto == map<string,int>::iterator
	for (auto it=cnt.begin();it!=cnt.end();it++){ //!=
		pair<string,int> p= *it;
		cout<<p.first<<' '<<p.second <<'\n';
	}
	for (pair<string,int> p:cnt){ //range-base for loop
		cout<<p.first<<' '<<p.second<<'\n';
	}
	for (auto p:cnt){
		cout<<p.first<<' '<<p.second<<'\n';
	}
	return 0;
}
