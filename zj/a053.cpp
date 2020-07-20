#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin>>n){
		if (n<=10){
			cout<<n*6<<endl;
		}
		else if (n>10 && n<=20){
			cout<<(n-10)*2 + 60<<endl;
		}
		else if (n>20 && n<=40){
			cout<<(n-20)*1 + 20 + 60<<endl;
		}
		else {
			cout<<100<<endl;
		}
	}
	return 0;
}
