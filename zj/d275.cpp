#include<iostream>
#include<cstring>
using namespace std;

void ans(char s[]){
	int counter_m=0,counter_f=0;
	for (int i=0;i<strlen(s);i++){
		if (s[i]=='M'){
			counter_m++;
		}
		else if (s[i]=='F'){
			counter_f++;
		}
	}
	if (counter_m==counter_f && counter_m>1){
		cout<<"LOOP"<<endl;
	}
	else {
		cout<<"NO LOOP"<<endl;
	}
}

int main(){
	char s[1000];
	int n;
	cin>>n;
	cin.ignore(1024,'\n');
	while (n>0){
		n--;
  		cin.getline(s,1000);
		ans(s);
	}
	return 0;
}
