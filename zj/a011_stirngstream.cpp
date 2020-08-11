#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string input;
	while (getline(cin,input)){
		for (int i=0;i<input.length();i++){
			if (isalpha(input[i])==0){
				input[i]=' ';
			}
		}
		stringstream sscin(input); //(©ñ¦r¦ê)
		string s;
		int counter=0;
		while (sscin>>s){
			counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}
