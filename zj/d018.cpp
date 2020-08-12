#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cstdlib> //atof()
using namespace std;

int main(){
	string input;
	while (getline(cin,input)){
		stringstream ss(input);
		string s;
		char c_str[100000]={0};
		double sum=0,x,dif=0,y;
		while (ss>>s){
			int check;
			for (int i=0;i<s.length();i++){
				if (s[i]==':'){
					check=(int)s[i-1];
					break;
				}
			}
			if (check%2==1){
				for (int i=0;i<s.length();i++){
					if (s[i]==':'){
						s.erase(s.begin(),s.begin()+i+1);
						break;
					}
				}
				strcpy(c_str,s.c_str());
				x=atof(c_str);
				sum+=x;
			}
			else {
				for (int i=0;i<s.length();i++){
					if (s[i]==':'){
						s.erase(s.begin(),s.begin()+i+1);
						break;
					}
				}
				strcpy(c_str,s.c_str());
				y=atof(c_str);
				dif+=y;
			}
		}
		cout<<sum-dif<<endl;
	}
	return 0;
}
