#include<iostream>
using namespace std;

int main(){
	long long int n;
	while (cin>>n){
		//��(n+1)/2�C�A���ɤw�g�g�F((n+1)/2)^2�ө_�ơA�B�ӦC�̫�@�ӼƬ�2*(((n+1)/2)^2)-1
		// odd = 2k-1 (k�ݩ� N) 
		cout<<(2*((n+1)/2)*((n+1)/2)-3)*3<<endl;
	}
	return 0;
}
