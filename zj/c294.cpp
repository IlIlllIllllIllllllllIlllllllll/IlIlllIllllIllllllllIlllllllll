#include<iostream>
using namespace std;

int check(int arr[]){
	if (arr[0]+arr[1]<=arr[2]){
		return 0;
	}
	else {
		if (arr[0]*arr[0]+arr[1]*arr[1]<arr[2]*arr[2]){
			return 1;
		}
		else if (arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]){
			return 2;
		}
		else {
			return 3;
		}
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int arr[3]={a,b,c},x=3,tmp;
	while (x>1){ //bubble_sort, at least n-1 times
		x--;
		for (int i=0;i<2;i++){
			if (arr[i]>arr[i+1]){
				tmp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=tmp;
			}
		}
	}
	int ans=check(arr);
	cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<endl;
	if (ans==0){
		cout<<"No"<<endl;
	}
	else if (ans==1){
		cout<<"Obtuse"<<endl;
	}
	else if (ans==2){
		cout<<"Right"<<endl;
	}
	else {
		cout<<"Acute"<<endl;
	}
	return 0;
}
