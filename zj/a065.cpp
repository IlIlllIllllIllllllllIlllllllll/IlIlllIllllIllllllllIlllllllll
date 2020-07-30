#include<iostream>
#include<cmath>
using namespace std;

int main(){
	char s[8];
	while (cin>>s){
		for (int i=0;i<=5;i++){
			cout<<abs((int)s[i]-(int)s[i+1]);
		}
		cout<<endl;
	}
	return 0;
}
