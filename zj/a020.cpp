#include<iostream>
using namespace std;

int main(){
	int x,y,b[10];
	char a[10];
	for (int i=0;i<10;i++){
		cin>>a[i];
	}
	if (a[0]=='A'){
		x=10;
	}
	if (a[0]=='B'){
		x=11;
	}
	if (a[0]=='C'){
		x=12;
	}
	if (a[0]=='D'){
		x=13;
	}
	if (a[0]=='E'){
		x=14;
	}
	if (a[0]=='F'){
		x=15;
	}
	if (a[0]=='G'){
		x=16;
	}
	if (a[0]=='H'){
		x=17;
	}
	if (a[0]=='I'){
		x=34;
	}
	if (a[0]=='J'){
		x=18;
	}
	if (a[0]=='K'){
		x=19;
	}
	if (a[0]=='L'){
		x=20;
	}
	if (a[0]=='M'){
		x=21;
	}
	if (a[0]=='N'){
		x=22;
	}
	if (a[0]=='O'){
		x=35;
	}
	if (a[0]=='P'){
		x=23;
	}
	if (a[0]=='Q'){
		x=24;
	}
	if (a[0]=='R'){
		x=25;
	}
	if (a[0]=='S'){
		x=26;
	}
	if (a[0]=='T'){
		x=27;
	}
	if (a[0]=='U'){
		x=28;
	}
	if (a[0]=='V'){
		x=29;
	}
	if (a[0]=='W'){
		x=32;
	}
	if (a[0]=='X'){
		x=30;
	}
	if (a[0]=='Y'){
		x=31;
	}
	if (a[0]=='Z'){
		x=33;
	}
	for (int i=1;i<10;i++){
		b[i]=int (a[i]-'0');
	}
	y= x/10 + (x%10)*9 + b[1]*8 + b[2]*7 + b[3]*6 + b[4]*5 + b[5]*4 + b[6]*3 + b[7]*2 + b[8]*1 + b[9];
	if (y%10==0){
		cout<<"real"<<endl;
	}
	if (y%10!=0){
		cout<<"fake"<<endl;
	}
	return 0;
}
