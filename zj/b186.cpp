#include<iostream>
using namespace std;

int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c;
	if (a>=10 && c>=2){
		x=a/10;
		y=c/2;
		if (x>y){
			cout<<a<<" �ӻ氮�A"<<y+b<<" �����J�O�A"<<c<<" �ӳJ�|�C"<<endl;
		}
		else {
			cout<<a<<" �ӻ氮�A"<<x+b<<" �����J�O�A"<<c<<" �ӳJ�|�C"<<endl;
		}
	}
	else {
		cout<<a<<" �ӻ氮�A"<<b<<" �����J�O�A"<<c<<" �ӳJ�|�C"<<endl;
	}
	return 0;
}
