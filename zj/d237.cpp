#include<iostream>
using namespace std;

bool prime_check(int i){
	bool check=true;
	for(int j=2;j*j<=i;j++){
		if(i%j==0){
	    	check=false;
	    	break;
		}
	}
	return check;
}

int main(){
	long long int sum=0;
	for(int i=2;i<=2000000;i++){ //question requests the prime_sum under 2000000
	    if(prime_check(i)==true){
	        sum+=i;
	    }
	}
	cout<<sum<<endl;
    return 0;
}
