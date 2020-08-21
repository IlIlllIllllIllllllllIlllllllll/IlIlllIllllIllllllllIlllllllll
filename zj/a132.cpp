#include <iostream>
#include <stack>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n && n!=0){
		int sum=0;
		stack<int> stk;
		while (n>0){
   			stk.push(n%2);
   			sum+=n%2;
			n/=2;
		}
		int original_size=stk.size();
		cout<<"The parity of ";
		for (int i=0;i<original_size;i++){
			cout<<stk.top();
			stk.pop();
		}
		cout<<" is "<<sum<<" (mod 2)."<<'\n';
	}
	return 0;
}
