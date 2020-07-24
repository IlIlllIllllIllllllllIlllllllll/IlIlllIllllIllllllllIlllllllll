#include<iostream>
using namespace std;

int main(){
	int n,a[100001],ps=0,ss=0,counter=0;
	cin>>n;
	int l=1,r=n-2;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	ps=a[0];
	ss=a[n-1];
	while (l<n || r>=0){
		if (ps>ss){
			ss=ss+a[r];
			r--;
		}
		else if (ps<ss){
			ps=ps+a[l];
			l++;
		}
		else {
			counter++;
			ps=ps+a[l];
			l++;
			ss=ss+a[r];
			r--;
		}
		//cout<<ps<<" "<<ss<<endl;
	}
	cout<<counter+1<<endl; //last time do not go into while, so +1
	return 0;
}
