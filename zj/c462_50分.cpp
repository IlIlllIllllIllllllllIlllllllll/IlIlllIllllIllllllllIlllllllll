#include <iostream>
#include <string>
using namespace std;

bool check_tmp1(int n,const string &tmp){
	for (int i=0;i+1<tmp.length();i++){
		if (islower(tmp[i])==islower(tmp[i+1])){
			return 0;
		}
	}
	return 1;
}

void task1(int n,const string &s){
	int ans=0;
	for (int i=0;i<s.length();i++){
		for (int j=0;j<=i;j++){
//			for (int k=j;k<=i;k++){
//				tmp.push_back(s[k]);
//			}
			string tmp=s.substr(j,i-j+1);
			if (check_tmp1(n,tmp)){
				ans=max(ans,(int)tmp.length());
			}
		}
	}
	cout<<ans<<'\n';
}

bool check_tmp2(int n,const string &tmp){
	if (tmp.length()%2==1) return 0;
	for (int i=0;i+1<tmp.length();i+=2){
		if (islower(tmp[i])!=islower(tmp[i+1])){
			return 0;
		}
	}
	for (int i=0;i+3<tmp.length();i+=2){
		if (islower(tmp[i]) && isupper(tmp[i+2]));
		else if (isupper(tmp[i]) && islower(tmp[i+2]));
		else return 0;
	}
	return 1;
}

void task2(int n,const string &s){
	int maxlen=0;
	for (int i=0;i<s.length();i++){
		for (int j=0;j<=i;j++){
			string tmp;
			for (int k=j;k<=i;k++){
//				cout<<s[k];
				tmp.push_back(s[k]);
			}
//			cout<<tmp<<'\n';
//			cout<<check_tmp(n,tmp)<<'\n';
			if (check_tmp2(n,tmp)){
				if (tmp.length()>maxlen){
					maxlen=tmp.length();
				}
			}
		}
//		cout<<'\n';
	}
	cout<<maxlen<<'\n';
}

void solve(int n,const string &s){
	if (s.length()<=100 && n==1){
		task1(n,s);
	}
	else if (s.length()<=100 && n==2){
		task2(n,s);
	}
	else {
//		task3(n,s);
	}
}

int main(){
	int n;
	string s;
	while (cin>>n>>s){
		solve(n,s);
	}
	return 0;
}
