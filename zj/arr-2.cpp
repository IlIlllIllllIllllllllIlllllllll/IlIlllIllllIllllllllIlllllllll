#include<iostream>
using namespace std;

int main(){
	int a[202][202],b[202][202];
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for (int i=0,p=0;i<m;i++,p++){
		for (int j=n-1,q=0;j>=0;j--,q++){
			b[p][q] = a[j][i];
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cout<<b[i][j];
		}
		cout<<endl;
	}
}
/*
2 4
1 2 3 4
5 6 7 8
*/
