#include<iostream>
#include<string> //stod() for c++11
#include<cstring>
#include<sstream>
using namespace std;

int main(){
	string input;
	while (getline(cin,input)){
		stringstream ss(input);
		string s;
		string::size_type sz;
		double sum=0,x,dif=0,y;
		while (ss>>s){
			if (s[0]%2==1){
				s.erase(s.begin(),s.begin()+2);
				x=stod(s,&sz);
				sum+=x;
			}
			else {
				s.erase(s.begin(),s.begin()+2);
				y=stod(s,&sz);
				dif+=y;
			}
		}
		cout<<sum-dif<<endl;
	}
	return 0;
}
