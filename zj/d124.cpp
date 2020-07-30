#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char n[10000]={0};
	while (cin>>n){
		int sum=0,i=0;
		while (i<strlen(n)){
			sum+=(int)n[i]-(int)'0';
			i++;
		}
		if (sum%3==0){
			cout<<"yes"<<endl;
		}
		else {
			cout<<"no"<<endl;
		}
	}
	return 0;
}
