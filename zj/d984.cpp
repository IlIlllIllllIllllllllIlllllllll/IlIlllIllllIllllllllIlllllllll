#include<iostream>
using namespace std;

int main(){
	long long int a,b,c;
	while (cin>>a>>b>>c){
		if (a>b && a>c){
			if (a>b+c){
				cout<<'A'<<endl;
			}
			else if (a<=b+c && b>c){
				cout<<'B'<<endl;
			}
			else if (a<=b+c && c>b){
				cout<<'C'<<endl;
			}
		}
		else if (b>a && b>c){
			if (b>a+c){
				cout<<'B'<<endl;
			}
			else if (b<=a+c && a>c){
				cout<<'A'<<endl;
			}
			else if (b<=a+c && c>a){
				cout<<'C'<<endl;
			}
		}
		else if (c>a && c>b){
			if (c>a+b){
				cout<<'C'<<endl;
			}
			else if (c<=a+b && a>b){
				cout<<'A'<<endl;
			}
			else if (c<=a+b && b>a){
				cout<<'B'<<endl;
			}
		}
	}
	return 0;
}
