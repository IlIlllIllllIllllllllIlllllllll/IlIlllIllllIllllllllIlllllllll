#include<iostream>
#include<cstring>
using namespace std;

string check(int sum,int y){ //y=s[8]
	if (y==0){
		y=10;
	}
	if (y==10-(1+sum)%10){
		return "AMW";
	}
	else if (y==10-(0+sum)%10){
		return "BNZ";
	}
	else if (y==10-(9+sum)%10){
		return "CIP";
	}
	else if (y==10-(8+sum)%10){
		return "DOQ";
	}
	else if (y==10-(7+sum)%10){
		return "ER";
	}
	else if (y==10-(6+sum)%10){
		return "FS";
	}
	else if (y==10-(5+sum)%10){
		return "GT";
	}
	else if (y==10-(4+sum)%10){
		return "HU";
	}
	else if (y==10-(3+sum)%10){
		return "JVX";
	}
	else if (y==10-(2+sum)%10){
		return "KLY";
	}
}

int main(){
	string s;
	cin>>s;
	int sum=0;
	for (int i=0;i<8;i++){
		sum+=(s[i]-'0')*(8-i);
	} //I want to check s[8]
	int y=s[8]-'0';
	string ans=check(sum,y);
	cout<<ans<<endl;
	return 0;
}
