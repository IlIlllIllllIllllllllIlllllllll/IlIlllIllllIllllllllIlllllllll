#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>1){
		a=1;
	}
	if (b>1){
		b=1;
	}
	if (a*b==c){
		cout<<"AND"<<endl;
	}
	if (a+b==0){
		if (c==0){
			cout<<"OR"<<endl<<"XOR"<<endl;	
		}
		else  {//c==1
			cout<<"IMPOSSIBLE"<<endl;
		}
	}
	if (a+b==1){
		if (c==0){
		}
		else { //c==1, e.g.0 1 1¡B1 0 1 
			cout<<"OR"<<endl<<"XOR"<<endl;
		}
	}
	if (a+b==2){
		if (c==0){
			cout<<"XOR"<<endl;
		}
		else { //c==1
			cout<<"OR"<<endl;
		}
	}
	return 0;
}
