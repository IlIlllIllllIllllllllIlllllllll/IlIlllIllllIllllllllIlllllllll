#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
	string s;
	while (cin>>s){
		int ascii[256]={0},odd_counter=0;
		for (int i=0;i<s.length();i++){
			if (isalpha(s[i])){ //if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' **s[i]<='z'
				s[i]=toupper(s[i]);
				ascii[s[i]]++;
			}
		}
		for (int i=0;i<256;i++){
			if (ascii[i]%2==1){
				odd_counter++;
			}
		}
		if (odd_counter<=1){
			cout<<"yes !"<<endl;
		}
		else {
			cout<<"no..."<<endl;
		}
	}
	return 0;
}
