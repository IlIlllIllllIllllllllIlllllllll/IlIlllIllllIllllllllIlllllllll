#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x1,y1,x2,y2,a=0;
	while (cin>>x1>>y1>>x2>>y2){
		if (x1==x2 && x2==y1 && y1==y2 && y2==0){
			break;
		}
		else if (x1==x2 && y1==y2){
			cout<<0;
		}
		else if (x1==x2 || y1==y2 || abs(x2-x1) == abs(y2-y1)){
			cout<<1;
		}
		else {
			cout<<2;
		}
		cout<<endl;
	}
	return 0;
}
