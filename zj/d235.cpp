#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int odd_even_dif(char n[],int sl){
	int odd_sum=0,even_sum=0,i=0,j=1;
	while (i<sl){
		odd_sum+=(int)n[i]-(int)'0';
		i+=2;
	}
	while (j<sl){
		even_sum+=(int)n[j]-(int)'0';
		j+=2;
	}
	return abs(odd_sum-even_sum);
}

int main(){
	char n[1000];
	while (cin>>n && (int)n[0]-(int)'0'!=0){
		int sl=strlen(n);
		int dif=odd_even_dif(n,sl);
		if (dif%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
		}
		else {
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}
