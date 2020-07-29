#include<iostream>
using namespace std;

int bubble_sort(int m,int a[]){
	int tmp,a_len=m;
	while (a_len>1){ //at least (m-1)times to bubble_sort
		a_len--;
		for (int i=1;i<=m;i++){
			a[0]=a[1];
			if (a[i]<a[i-1]){
				tmp=a[i];
				a[i]=a[i-1];
				a[i-1]=tmp;
			}
		}
	}
	/*
	for (int i=1;i<=m;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	*/
	return a[m];
}

double fun_Qmid(int m,int a[]){
	double Qmid=0;
	if (m%2==0){
		Qmid=(a[m/2]+a[(m/2)+1])/2;
	}
	else {
		Qmid=a[(m+1)/2];
	}
	return Qmid;
}

int main(){
	int n;
	cin>>n;
	while (n>0){
		n--;
		int m,a[1000],tmp;
		cin>>m;
		for (int i=1;i<=m;i++){
			cin>>a[i];
		}
		a[m]=bubble_sort(m,a);
		double Qmid=fun_Qmid(m,a);
		
		int difsum=0;
		for (int i=1;i<=m;i++){
			if (a[i]>Qmid){
				difsum+=a[i]-Qmid;
			}
			else {
				difsum+=Qmid-a[i];
			}
		}
		cout<<difsum<<endl;
	}
	return 0;
}
