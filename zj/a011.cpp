#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[1001];
	while (cin.getline(s,1000)){
		int counter=0;
		for (int i=0;i<strlen(s)-1;i++){
			if (isalpha(s[i])==0){
				counter++;
				if (isalpha(s[i+1])==0){
					counter--;
				}
			}
		}
		if (isalpha(s[0])==0){
			cout<<counter<<endl;
		}
		else {
			cout<<counter+1<<endl;
		}
	}
	return 0;
}
