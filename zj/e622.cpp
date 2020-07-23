#include<iostream>
using namespace std;

int main(){
	int n,s,cp,iv,maxcp,maxcpnum; //'s'and she has
	cin>>n>>s;
	for (int i=1;i<=n;i++){
		cin>>cp>>iv;
		if (iv<=29){
			cp=cp+10*(s/1000);
		}
		else if (iv>=30 && iv<=39){
			cp=cp+50*(s/1000);
		}
		else if (iv>=40 && iv<=50){
			cp=cp+100*(s/1000);
		}
		if (cp>maxcp){
			maxcp=cp;
			maxcpnum=i;
		}
	}
	cout<<maxcpnum<<' '<<maxcp<<endl;
	return 0;
}
