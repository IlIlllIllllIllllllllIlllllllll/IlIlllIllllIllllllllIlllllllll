#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	const double pi=2*acos(0); //double!! not int
	double D,L,ans=0;
	while (cin>>D>>L){
		ans=pi*(L/2)*sqrt((L/2*L/2)-(D/2*D/2));
		cout<< setprecision(3)<< fixed<< ans<<endl;
	}
	return 0;
}
