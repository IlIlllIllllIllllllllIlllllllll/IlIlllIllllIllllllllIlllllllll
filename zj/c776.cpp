#include<iostream>
using namespace std;

int main(){
	long long int n,m;
	while (cin>>n>>m){
		cout<<n*m*6-(n-1)*m-2*(m-1)*n<<endl;
	}
	return 0;
}
