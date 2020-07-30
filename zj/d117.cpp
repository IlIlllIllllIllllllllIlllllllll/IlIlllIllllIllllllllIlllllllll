#include<iostream>
#include<cstring>
using namespace std;

bool prime_check(int sum){
	for (int i=2;i*i<=sum;i++){
		if (sum%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	char s[21];
	int a[20];
	while (cin>>s){
		int sum=0;
		for (int i=0;i<strlen(s);i++){
			if (s[i]>='a'){
				a[i]=(int)s[i]-(int)'a'+1;
			}
			else {
				a[i]=(int)s[i]-(int)'A'+27;
			}
			sum+=a[i];
		}
		bool ans=prime_check(sum);
		if (ans==1){
			cout<<"It is a prime word."<<endl;
		}
		else {
			cout<<"It is not a prime word."<<endl;
		}
	}
	return 0;
}
