#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[10000];
	cin>>s;
	int n=strlen(s);
	for (int i=0;i<n;i++){
		char c=s[i];
		if (c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9'){
		}
		else {
			c=' ';
		}
		s[i]=c;
	}
	cout<<s<<endl;
	
	return 0;
}
