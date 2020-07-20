#include<iostream>
using namespace std;

int main(){
	int n,m,counter=0;
	cin>>n>>m;
	while (n<m){
		n=n*3;
		counter++;
	}
	cout<<counter<<endl;
	return 0; 
} 
