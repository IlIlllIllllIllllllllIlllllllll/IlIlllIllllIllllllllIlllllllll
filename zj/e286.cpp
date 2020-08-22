#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int h[4],a[4],h_sum=0,a_sum=0,h_wt=0,a_wt=0;
	for (int i=0;i<4;i++){
		cin>>h[i];
		h_sum+=h[i];
	}
	for (int i=0;i<4;i++){
		cin>>a[i];
		a_sum+=a[i];
	}
	cout<<h_sum<<':'<<a_sum<<'\n';
	(h_sum>a_sum)?h_wt++:a_wt++;
	h[4]=0;
	a[4]=0;
	h_sum=0;
	a_sum=0;
	for (int i=0;i<4;i++){
		cin>>h[i];
		h_sum+=h[i];
	}
	for (int i=0;i<4;i++){
		cin>>a[i];
		a_sum+=a[i];
	}
	cout<<h_sum<<':'<<a_sum<<'\n';
	(h_sum>a_sum)?h_wt++:a_wt++;
	if (h_wt>a_wt){
		cout<<"Win";
	}
	else if (h_wt<a_wt){
		cout<<"Lose";
	}
	else cout<<"Tie";
	return 0;
}
