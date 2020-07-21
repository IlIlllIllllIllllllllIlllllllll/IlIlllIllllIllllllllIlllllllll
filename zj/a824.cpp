#include<iostream>
using namespace std;

int main(){
	char ans='A'; //int(a)==65 ,char(65)=='A'
	int a,b,c,sum=0;
	cin>>a>>b>>c;
	for (int i=1;i<=c;i++){
		if (i%a==0 || i%b==0){
			sum=sum+i;
		}
	}
	cout<<char(64+sum%26)<<endl;
	return 0;
}
