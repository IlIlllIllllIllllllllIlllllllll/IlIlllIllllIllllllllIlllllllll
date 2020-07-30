#include<iostream>
using namespace std;

int main(){
	char s1[1000],s2[1000];
	while (cin>>s1>>s2){
		if ((int)s1[0]>(int)s2[0]){
			cout<<26-((int)s1[0]-(int)s2[0])<<endl;
		}
		else {
			cout<<(int)s2[0]-(int)s1[0]<<endl;
		}
	}
	return 0;
}
