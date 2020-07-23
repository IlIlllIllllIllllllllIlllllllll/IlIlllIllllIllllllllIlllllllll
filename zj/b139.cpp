#include<iostream>
using namespace std;

int main(){
	int l,m,t[10000],a,b;
	while (cin>>l>>m){
		int counter=0;
		for (int i=0;i<=l;i++){
			t[i]=1;
		}
		for (int i=1;i<=m;i++){
			cin>>a>>b;
			for (int j=a;j<=b;j++){
				t[j]=0;
			}
		}
		for (int i=0;i<=l;i++){
			if (t[i]==1){
				counter++;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}
