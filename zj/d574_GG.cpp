#include<iostream>
#include<string>
#include<sstream>
using namespace std;

long long int counter[10000001]={0};
int main(){
	long long int n;
	while (cin>>n){
		string input,s,check;
		cin>>input;
		stringstream ss;
		long long int x=0;
		for (int i=1;i<n;i++){
			if (input[i-1]==input[i]){
				counter[x]++;
				s[x]=input[i];
			}
			else if (input[i+1]==NULL){
				x++;
				counter[x]++;
				counter[x]--;
				s[x]=input[i];
			}
			else if (input[0]!=input[1]){
				counter[x]++;
				counter[x]--;
				s[x]=input[0];
				x++;
			}
			else {
				x++;
			}
		}
		for (long int i=0;i<=x;i++){
			ss<<counter[i]+1<<s[i];
		}
		x=0;
		counter[10000001]={0};
		ss>>check;
		if (check.size()<input.size()){
			cout<<check<<endl;
		}
		else {
			cout<<input<<endl;
		}
		ss.str("");
		ss.clear();
		input="";
		input.clear();
		s="";
		s.clear();
		check="";
		check.clear();
	}
	return 0;
}
