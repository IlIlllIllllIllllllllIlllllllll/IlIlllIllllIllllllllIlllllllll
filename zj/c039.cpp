#include<iostream>
using namespace std;

int cycle_length(int i){
	int cl=1;
	while (i!=1){
		if (i%2==0){
			i=i/2;
		}
		else if (i%2!=0){
			i=3*i+1;
		}
		cl++;
	}
	return cl;
}

int main(){
	int n,m;
	while (cin>>n>>m){
		int a=n,b=m,tmp;
		int cl,maxcl=0;
		if (a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		for (int i=a;i<=b;i++){
			cl=cycle_length(i);
			if (cl>maxcl){
				maxcl=cl;
			}
		}
		cout<<n<<' '<<m<<' '<<maxcl<<endl;
	}
	return 0;
}
