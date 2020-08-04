#include<iostream>
using namespace std;

int f91(int n){
	if (n<=100){
		return f91(f91(n+11));
	}
	else {
		return n-10;
	}
}

int main(){
	int n;
	while (cin>>n){
		int ans;
		if (n==0){
			return 0;
		}
		else {
			ans=f91(n);
			cout<<"f91("<<n<<") = "<<ans<<endl;
		}
	}
	return 0;
}
