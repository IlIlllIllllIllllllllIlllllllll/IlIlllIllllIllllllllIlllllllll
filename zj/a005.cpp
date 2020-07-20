#include<iostream>
using namespace std;

int main(){
	int n,a,b,c,d;
	cin>>n;
	while (n--){
		cin>>a>>b>>c>>d;
		if (b-a==c-b){
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+b-a;
		}
		else {
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(b/a);
		}
		cout<<endl;
	}
	return 0;
}
