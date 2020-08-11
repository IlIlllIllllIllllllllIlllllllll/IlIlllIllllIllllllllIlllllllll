#include<iostream>
#include<sstream>
using namespace std;

int main(){
	string s;
	while (getline(cin,s)){
		unsigned long int sum=0,x;
		stringstream ss(s);
		while (1){
			ss>>x;
			if (ss.fail()){
				break;
			}
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
