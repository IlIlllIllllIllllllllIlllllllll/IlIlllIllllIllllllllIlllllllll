#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n){
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		for (int i=0;i<n;i++){
			if (a[i]!=-1){
				for (int x=a[i],tmp;x!=-1;){
					tmp=x;//tmp記下a[i]是誰
					x=a[x];//x= x的朋友
					a[tmp]=-1;
				}
				ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
