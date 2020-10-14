#include <iostream>
using namespace std;

int a[50005];
bool vis[50005];
int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	while (cin>>n){
		for (int i=0;i<n;i++){ //initialize with loop
			vis[i]=false;
		}
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		for (int i=0;i<n;i++){
			if (vis[i]==false){
				int x=i;
				do {
					vis[x]=true;
					x=a[x];
				}while (vis[x]==false);
				ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
/*
10
4 7 2 9 6 0 8 1 5 3
3
0 2 1
*/
