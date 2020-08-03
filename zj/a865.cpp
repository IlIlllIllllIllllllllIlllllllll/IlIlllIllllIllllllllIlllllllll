#include<iostream>
#include<cstring>
using namespace std;

void Greek_Numerals(char s[]){
	int sum=0;
	for (int i=0;i<strlen(s);i++){
		if (s[i]=='A'){
			sum+=1;
		}
		if (s[i]=='B'){
			sum+=2;
		}
		if (s[i]=='G'){
			sum+=3;
		}
		if (s[i]=='D'){
			sum+=4;
		}
		if (s[i]=='E'){
			sum+=5;
		}
		if (s[i]=='#'){
			sum+=6;
		}
		if (s[i]=='Z'){
			sum+=7;
		}
		if (s[i]=='Y'){
			sum+=8;
		}
		if (s[i]=='H'){
			sum+=9;
		}
		if (s[i]=='I'){
			sum+=10;
		}
		if (s[i]=='K'){
			sum+=20;
		}
		if (s[i]=='L'){
			sum+=30;
		}
		if (s[i]=='M'){
			sum+=40;
		}
		if (s[i]=='N'){
			sum+=50;
		}
		if (s[i]=='X'){
			sum+=60;
		}
		if (s[i]=='O'){
			sum+=70;
		}
		if (s[i]=='P'){
			sum+=80;
		}
		if (s[i]=='Q'){
			sum+=90;
		}
		if (s[i]=='R'){
			sum+=100;
		}
		if (s[i]=='S'){
			sum+=200;
		}
		if (s[i]=='T'){
			sum+=300;
		}
		if (s[i]=='U'){
			sum+=400;
		}
		if (s[i]=='F'){
			sum+=500;
		}
		if (s[i]=='C'){
			sum+=600;
		}
		if (s[i]=='$'){
			sum+=700;
		}
		if (s[i]=='W'){
			sum+=800;
		}
		if (s[i]=='3'){
			sum+=900;
		}
	}
	cout<<sum<<endl;
}

int main(){
	char s[1000];
	while (cin>>s && s[0]!='.'){
		Greek_Numerals(s);
	}
	return 0;
}
