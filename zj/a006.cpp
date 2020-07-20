#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c,D;
	cin>>a>>b>>c;
	D=sqrt(b*b-4*a*c);
	if (D>0){
		cout<<"Two different roots x1="<<((-1)*b+D)/(2*a)<<" , x2="<<((-1)*b-D)/(2*a)<<endl;
	}
	else if (D==0){
		cout<<"Two same roots x="<<(-1)*b/(2*a)<<endl;
	}
	else if (D<0){
		cout<<"No real root"<<endl;
	}
	return 0;
}
