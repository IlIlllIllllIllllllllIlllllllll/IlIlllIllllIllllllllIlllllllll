#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	float h,m;
	char x=':';
	while (cin>>h>>x>>m){
		if (h==0 && m==00){
			break;
		}
		else {
			if (fabs((h*60+m)*1/2 - m*6)>180){
				cout<<setprecision(3)<<fixed<<360-fabs((h*60+m)*1/2 - m*6);
			}
			else {
				cout<<setprecision(3)<<fixed<<fabs((h*60+m)*1/2 - m*6);
			}
		}
		cout<<endl;
	}
	return 0;
}
