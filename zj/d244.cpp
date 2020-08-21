#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int,int> mp;
	int n;
	while (cin>>n){
		mp[n]++;
	}
	for (auto p:mp){
		if (p.second%3==2){ //p.second ¬Ovalue ==­Ó¼Æ
			cout<<p.first<<'\n';
			break;
		}
	}
	return 0;
}
