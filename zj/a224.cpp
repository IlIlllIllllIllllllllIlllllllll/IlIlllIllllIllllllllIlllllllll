#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
	char s[1002];
	int a[91]={0};
	while (cin>>s){
		for (int i=0;i<strlen(s);i++){
			if (s[i]>='a' && s[i]<='z'){
				s[i]=toupper(s[i]);
			}
			for (char j='A';j<='Z';j++){
				if (s[i]==j){
					a[j]++;
				}
			}
		}
		int check=0;
		for (char i='A';i<='Z';i++){
			if (a[i]%2!=0){
				check++;
			}
		}
		if (check==0 || check==1){
			cout<<"yes !"<<endl;
		}
		else {
			cout<<"no..."<<endl;
		}
		s[1002]={0};
		a[91]={0};
	}
	return 0;
}
