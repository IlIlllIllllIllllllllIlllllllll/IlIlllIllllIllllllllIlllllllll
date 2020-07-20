#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x=0,y=1;
	//A="0 1 0 1",B="0 1 1 1",C="0 0 1 0",D="1 1 0 1",E="1 0 0 0",F="1 1 0 0"
	while (cin>>n){
		while (n--){
			if (cin>>x>>y>>x>>y){
				cout<<'A';
			}
			if (cin>>x>>y>>y>>y){
				cout<<'B';
			}
			if (cin>>x>>x>>y>>x){
				cout<<'C';
			}
			if (cin>>y>>y>>x>>y){
				cout<<'D';
			}
			if (cin>>y>>x>>x>>x){
				cout<<'E';
			}
			if (cin>>y>>y>>x>>x){
				cout<<'F';
			}
		}
		cout<<endl;
	}
	return 0;
}
