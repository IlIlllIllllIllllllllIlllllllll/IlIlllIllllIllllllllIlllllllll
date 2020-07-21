#include<iostream>
using namespace std;

int main(){
	int a,b,c,d,tmpa,tmpb;
	while (cin>>a>>b>>c>>d){
		tmpa=a/(37*c+(64-8*(b%8)));
		if (b%8==0){
			tmpb=b/8;
		}
		else {
			tmpb=b/8+1;
		}
		if (37*c+(64-8*(b%8))<a){ //if(tmpa>1)
			cout<<d+c+tmpb+tmpa;
		}
		else {
			cout<<d+c+tmpb;
		}
		cout<<endl;
	}
	return 0;
}
