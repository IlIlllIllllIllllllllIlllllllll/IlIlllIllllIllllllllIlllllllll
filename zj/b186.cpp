#include<iostream>
using namespace std;

int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c;
	if (a>=10 && c>=2){
		x=a/10;
		y=c/2;
		if (x>y){
			cout<<a<<" ­Ó»æ°®¡A"<<y+b<<" ²°¥©§J¤O¡A"<<c<<" ­Ó³J¿|¡C"<<endl;
		}
		else {
			cout<<a<<" ­Ó»æ°®¡A"<<x+b<<" ²°¥©§J¤O¡A"<<c<<" ­Ó³J¿|¡C"<<endl;
		}
	}
	else {
		cout<<a<<" ­Ó»æ°®¡A"<<b<<" ²°¥©§J¤O¡A"<<c<<" ­Ó³J¿|¡C"<<endl;
	}
	return 0;
}
