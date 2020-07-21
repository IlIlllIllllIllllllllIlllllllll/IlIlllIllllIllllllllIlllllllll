#include<iostream>
using namespace std;

int main(){
	int n,a,max_a=-1;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a;
		if (a>max_a){
			max_a=a;
		}
	}
	cout<<max_a<<endl;
	return 0;
}
