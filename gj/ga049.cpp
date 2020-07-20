#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			// 々々々々々 
			if (i%3 == j%3){
				cout<<'@';
			}
			else {
				cout<<'-';
			}
		}
		cout<<endl;
	}
	return 0;
}
