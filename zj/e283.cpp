#include<iostream>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string x,s1="0 1 0 1",s2="0 1 1 1",s3="0 0 1 0",s4="1 1 0 1",s5="1 0 0 0",s6="1 1 0 0";
	while (cin>>n){
		while (n--){
			cin>>x;
			if (x==s1){
				cout<<'A';
			}
			if (x==s2){
				cout<<'B';
			}
			if (x==s3){
				cout<<'C';
			}
			if (x==s4){
				cout<<'D';
			}
			if (x==s5){
				cout<<'E';
			}
			if (x==s6){
				cout<<'F';
			}
		}
		cout<<endl;
	}
	return 0;
}
