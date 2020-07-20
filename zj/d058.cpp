#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x;
	int n;
	cin>>x;
	n=x/(abs(x)-0.1);//-0.1 cuz 0
	cout<<n<<endl;
	return 0;
}
