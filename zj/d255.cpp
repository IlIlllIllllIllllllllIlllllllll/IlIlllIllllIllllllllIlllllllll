#include<iostream>
using namespace std;

int gcd(int a,int b){ //����۰��k
	int tmp=1;
	while (tmp!=0){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}

int main(){
	int n;
	while (cin>>n && n!=0){
		int G=0;
		for (int i=1;i<n;i++){
			for (int j=i+1;j<=n;j++){
				G+=gcd(i,j);
			}
		}
		cout<<G<<endl;
	}
	return 0;
}
