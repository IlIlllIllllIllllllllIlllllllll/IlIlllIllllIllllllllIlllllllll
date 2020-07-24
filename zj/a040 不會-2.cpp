#include<iostream>
#include<cmath>
using namespace std;

int length(int l){
	int len=1,k=10;
	while (l/k>0){
		len+=1;
		k=k*10;
	}
	return len;
}
int main(){
	int n,m,a[1000000],counter=0;
	int an[1000000],k=0;
	cin>>n>>m;
	for (int i=n;i<=m;i++){
		int sum=0;
		int l=length(i);
		for (int j=2;j<=l+1;j++){
			a[j-1]=i%(int)pow(10,j)-a[j-2]; //a[1]~a[a] digit
		}
		for (int j=1;j<=l;j++){
			sum=sum+pow(a[j],l);
		}
		if (sum==i){
			an[k]=i;
			k++;
			counter++;
		}
	}
	if (counter>0){
		for (int i=0;i<=k;k++){
			cout<<an[k]<<' ';
		}
	}
	else {
		cout<<"none";
	}
	return 0;
}
