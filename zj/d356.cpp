#include<iostream>
using namespace std;

int main(){
	long long int k,n;
	double sum=0;
	cin>>k;
	for (double i=1;i<=10000000000000;i++){
		n++;
		sum=sum+(1/i);
		if (sum>k){
			cout<<n<<endl;
			break;
		}
	}
	return 0;
}
