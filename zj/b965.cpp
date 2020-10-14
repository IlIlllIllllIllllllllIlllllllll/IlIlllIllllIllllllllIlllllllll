#include <iostream>
using namespace std;

int a[11][11],b[11][11];
int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int r,c,m;
	while (cin>>r>>c>>m){
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				cin>>b[i][j];
			}
		}
		int op[m];
		for (int x=0;x<m;x++){
			cin>>op[x];
		}
		for (int x=m-1;x>=0;x--){
			if (op[x]==0){
				for (int i=0;i<r;i++){
					for (int j=0;j<c;j++){
						a[c-1-j][i]=b[i][j];
					}
				}
				int tmp=r;
				r=c;
				c=tmp;
				for (int i=0;i<r;i++){
					for (int j=0;j<c;j++){
						b[i][j]=a[i][j];
					}
				}
			}
			else {
				for (int i=0;i<r;i++){
					for (int j=0;j<c;j++){
						a[r-1-i][j]=b[i][j];
					}
				}
				for (int i=0;i<r;i++){
					for (int j=0;j<c;j++){
						b[i][j]=a[i][j];
					}
				}
			}
		}
		cout<<r<<' '<<c<<'\n';
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				cout<<b[i][j];
				cout<<((j==c-1)?'\n':' ');
			}
		}
	}
	return 0;
}
/*
3 2 1
1 2
3 4
5 6
0
3 2 1
1 1
3 1
1 2
0
*/
