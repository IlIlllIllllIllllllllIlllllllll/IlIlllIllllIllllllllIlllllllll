#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,n;
	while (cin>>a>>b){
		int counter=0;
		if (a==0 && b==0){
			break;
		}
		else{
			for (int i=1;i*i<=b;i++){
				if (i*i>=a){
					counter++;
				}
			}
			cout<<counter<<endl;
		}
	}
	return 0;
}
