#include<iostream>
using namespace std;

int main(){
	int n,a[100001],counter=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0,j=n-1,pre=0,suf=0;i<n;i++){
		pre+=a[i];
		while (j>=0 && suf<pre){
			suf+=a[j];
			j--;
		}
		if (pre==suf){
			counter++;
		}
	}
	cout<<counter<<endl;
	return 0;
}
