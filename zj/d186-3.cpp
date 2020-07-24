#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,n;
	while (cin>>a>>b){
		if (a==0 && b==0){
			break;
		}
		else {
			cout<<(int)sqrt(b)-(int)sqrt(a-1)<<endl;
		}
	}
	return 0;
}
