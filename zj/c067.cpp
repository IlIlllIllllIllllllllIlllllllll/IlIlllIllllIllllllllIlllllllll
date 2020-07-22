#include<iostream>
using namespace std;

int main(){
	int n,Set=0;
	while (cin>>n && n>0){
		int h[n],sum=0,ave=0,mov=0;
		for (int i=0;i<n;i++){
			cin>>h[i];
			sum=sum+h[i];
		}
		ave=sum/n;
		for (int i=0;i<n;i++){
			if (h[i]>ave){
				mov=mov+(h[i]-ave);
			}
		}
		Set++;
		cout<<"Set #"<<Set<<endl<<"The minimum number of moves is "<<mov<<'.'<<endl;
	}
	return 0;
}
