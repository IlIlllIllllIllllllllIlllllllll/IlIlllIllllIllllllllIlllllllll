#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while (cin>>n){
		if (n==2 || n==3){
			cout<<"質數";
		}
		else {
			for (int i=2;i*i<=n;i++){
				if (n%i==0){
					cout<<"非質數";
					break;
				}
				else {
					cout<<"質數";
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
