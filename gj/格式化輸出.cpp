#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char a ='|';
	int x,y=0;
	cin>>x;
	y=x%10000;
	if (x<10000){
		cout<< a<< setfill('_')<< setw(8)<< y<< a<< endl;
	}
	if (x>=10000 && y<10){
		cout<< a<< setfill('_')<< setw(7)<<"000"<< y<< a<< endl;
	}
	else if (x>=10000 && 10<=y && y<100){
		cout<< a<< setfill('_')<< setw(6)<<"00"<< y<< a<< endl;
	}
	else if (x>=10000 && 100<=y && y<1000){
		cout<< a<< setfill('_')<< setw(5)<<"0"<< y<< a<< endl;
	}
	else if (x>=10000 && 1000<=y && y<10000) {
		cout<< a<< setfill('_')<< setw(8)<< y<< a<< endl;
	}
	return 0;
}
