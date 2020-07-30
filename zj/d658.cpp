#include<iostream>
#include<cmath>
using namespace std;

int min_times(int n){
	if (n==1) {
		return 0;
	}
	else {
		for (double i=1;i<=14;i++){
			if (pow(2,i)>=n){
				return i;
			}
		}
	}
}

int main(){
	int n,x=1;
	while (cin>>n){
		if (n<0){
			return 0;
		}
		else {
			cout<<"Case "<<x<<": "<<min_times(n)<<endl;
			x++;
		}
	}
	return 0;
}
