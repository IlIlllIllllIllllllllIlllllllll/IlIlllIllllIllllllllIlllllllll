#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double C,F;
	cin>>F;
	C=(F-32)*5/9;
	cout<<setprecision(3)<<fixed<<C<<endl;
	return 0;
}
