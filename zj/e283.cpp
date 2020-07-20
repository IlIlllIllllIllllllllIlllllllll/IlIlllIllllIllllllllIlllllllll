#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a,b,c,d;
	//A="0 1 0 1",B="0 1 1 1",C="0 0 1 0",D="1 1 0 1",E="1 0 0 0",F="1 1 0 0"
	while (cin>>n){
		while (n--){
			cin>>a>>b>>c>>d;
			if (a==0 && b==1 && c==0 && d==1){
				cout<<'A';
			}
			if (a==0 && b==1 && c==1 && d==1){
				cout<<'B';
			}
			if (a==0 && b==0 && c==1 && d==0){
				cout<<'C';
			}
			if (a==1 && b==1 && c==0 && d==1){
				cout<<'D';
			}
			if (a==1 && b==0 && c==0 && d==0){
				cout<<'E';
			}
			if (a==1 && b==1 && c==0 && d==0){
				cout<<'F';
			}
		}
		cout<<endl;
	}
	return 0;
}
