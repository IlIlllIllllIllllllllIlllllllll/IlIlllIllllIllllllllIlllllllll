#include<iostream>
using namespace std;

int main(){
	int v,t;
	/* v0=0,S=1/2(v0+v)t ¡îa=v/t ¡ïS=1/2(v/t *t)*t 
	t¥N 2t ¡÷1/2(v/t *2t)*2t = 2*v*t */ 
	while (cin>>v>>t){
		cout<< 2*v*t<<endl;
	}
	return 0;
}
