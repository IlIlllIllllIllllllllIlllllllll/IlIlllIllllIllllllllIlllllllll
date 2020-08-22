#include<iostream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int a,b,c;
	cin>>a>>b>>c;
	if (a>1){
		a=1;
	}
	if (b>1){
		b=1;
	}
	if (a*b==c){
		cout<<"AND"<<'\n';
	}
	if (a+b==0){
		if (c==0){
			cout<<"OR"<<'\n'<<"XOR"<<'\n';
		}
		else  {//c==1
			cout<<"IMPOSSIBLE"<<'\n';
		}
	}
	if (a+b==1){
		if (c==0){
		}
		else { //c==1, e.g.0 1 1¡B1 0 1 
			cout<<"OR"<<'\n'<<"XOR"<<'\n';
		}
	}
	if (a+b==2){
		if (c==0){
			cout<<"XOR"<<'\n';
		}
		else { //c==1
			cout<<"OR"<<'\n';
		}
	}
	return 0;
}
