#include<iostream>
using namespace std;

int main(){
	long long int n;
	while (cin>>n){
		//第(n+1)/2列，此時已經寫了((n+1)/2)^2個奇數，且該列最後一個數為2*(((n+1)/2)^2)-1
		// odd = 2k-1 (k屬於 N) 
		cout<<(2*((n+1)/2)*((n+1)/2)-3)*3<<endl;
	}
	return 0;
}
