#include<iostream>
using namespace std;

const int maxn=10000006;
bool p[maxn];
int main(){
	int n,sum=0;
	cin>>n;
	for (int i=2;i<=n;i++){
		p[i]=true;
	}
	for (int i=2;i<=n;i++){
		for (int j=2;j*j<=i;j++){
			if (i%j==0){
				p[i]=false;
			}
		}
		if (p[i]==1){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
