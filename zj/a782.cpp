#include<iostream>
#include<cstring>
using namespace std;

void whole_ans(char s[]){
	char ans_first=s[0];
	char ans[81]={0};
	char *ans2=NULL; //NULL(C)¡Bnullptr(C++ 11) Âk¹sªº·N«ä
	int x=0;
	for (int i=0;i<=81;i++){
		if (s[i]==' '){
			ans[x]=(char)toupper(s[i+1]);
			ans2=s+i+1;
			x++;
			for (int j=0;j<=i;j++){
				s[j]=0;
			}
		}
	}
	cout<<(char)toupper(ans_first)<<ans<<' '<<ans2<<endl;
	for (int i=0;i<=81;i++){
		s[i]=0;
		ans[i]=0;
		ans2[i]=0;
	}
}

int main(){
	char s[81]={0};
	while (cin.getline(s,1000) && s[0]!='E'&&s[1]!='N'&&s[2]!='D'){
		whole_ans(s);
	}
	return 0;
}
