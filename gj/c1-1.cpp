#include<iostream>
using namespace std;

int main(){
	int G,g,b,p;
	cin>> g;
	G= g+3;
	b= 2*g-5;
	p= 10*(b/10)+ G%10; 
	cout<< p<< endl;
	return 0;
}
