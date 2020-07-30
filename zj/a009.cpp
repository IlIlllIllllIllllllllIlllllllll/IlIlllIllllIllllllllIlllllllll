#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[10000];
	cin>>s;
	for (int i=0;i<strlen(s);i++){
		s[i]=(int)s[i]-7;
	}
	cout<<s<<endl;
	return 0;
}
