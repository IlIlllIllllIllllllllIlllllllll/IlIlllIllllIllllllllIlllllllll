#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cstdlib> //atoi()
#include<cctype> //isdigit()
using namespace std;

int main(){
	string input;
	while (getline(cin,input)){
		stringstream ss(input);
		string s;
		int sum=0;
		while (ss>>s){
			bool check=1;
			int x;
			char a[10000];
			strcpy(a, s.c_str());
			for (int i=0;i<s.length();i++){
				if (isdigit(a[i])==0){
					check=0;
				}
			}
			if (check){
				x=atoi(a);
				sum+=x;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
