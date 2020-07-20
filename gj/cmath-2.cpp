#include<iostream>
#include<iomanip> 
#include<cmath>
using namespace std;

int main(){
	double a,b=0;
	int y=0;
	cin>>a>>b;
	y=b*log10(a)/1;
	cout<< y+1<< endl;
	return 0;
}
