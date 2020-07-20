#include<iostream>
using namespace std;

int main(){
	int n=0,ans;
	double m;
	cin>>n;
	ans=n;
	m=n; //m are recyclable ones
	while (1){
		if (m/5 >=1){
			m=m-5+1;
			ans++;
		}
		else {
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
