#include<iostream>
using namespace std;

int main(){
	int a,b,e=0;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (i%2==0){
			e++;
		}
	}
	cout<<e<<endl;
	return 0;
}
