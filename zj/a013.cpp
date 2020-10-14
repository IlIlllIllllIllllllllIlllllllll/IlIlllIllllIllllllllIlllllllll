#include<bits/stdc++.h>
using namespace std;

int convert_cin_to_num(string &a,string &b) {
	int sum_a=0,sum_b=0;
	for (char i=0; i<(int)a.length(); i++) {
		if (a[i]=='I') {
			if (a[i+1]=='V') {
				sum_a+=4;
				i++;
			} else if (a[i+1]=='X') {
				sum_a+=9;
				i++;
			} else if (a[i+1]=='I'&&a[i+2]=='I'&&a[i+3]=='I') {
				sum_a+=4;
				i+=3;
			} else sum_a+=1;
		} else if (a[i]=='V') sum_a+=5;
		else if (a[i]=='X') {
			if (a[i+1]=='L') {
				sum_a+=40;
				i++;
			} else if (a[i+1]=='C') {
				sum_a+=90;
				i++;
			} else if (a[i+1]=='X'&&a[i+2]=='X'&&a[i+3]=='X') {
				sum_a+=40;
				i+=3;
			} else sum_a+=10;
		} else if (a[i]=='L') sum_a+=50;
		else if (a[i]=='C') {
			if (a[i+1]=='D') {
				sum_a+=400;
				i++;
			} else if (a[i+1]=='M') {
				sum_a+=900;
				i++;
			} else if (a[i+1]=='C'&&a[i+2]=='C'&&a[i+3]=='C') {
				sum_a+=400;
				i+=3;
			} else sum_a+=100;
		} else if (a[i]=='D') sum_a+=500;
		else if (a[i]=='M') sum_a+=1000;
	}
	for (char i=0; i<(int)b.length(); i++) {
		if (b[i]=='I') {
			if (b[i+1]=='V') {
				sum_b+=4;
				i++;
			} else if (b[i+1]=='X') {
				sum_b+=9;
				i++;
			} else if (b[i+1]=='I'&&b[i+2]=='I'&&b[i+3]=='I') {
				sum_b+=4;
				i+=3;
			} else sum_b+=1;
		} else if (b[i]=='V') sum_b+=5;
		else if (b[i]=='X') {
			if (b[i+1]=='L') {
				sum_b+=40;
				i++;
			} else if (b[i+1]=='C') {
				sum_b+=90;
				i++;
			} else if (b[i+1]=='X'&&b[i+2]=='X'&&b[i+3]=='X') {
				sum_b+=40;
				i+=3;
			} else sum_b+=10;
		} else if (b[i]=='L') sum_b+=50;
		else if (b[i]=='C') {
			if (b[i+1]=='D') {
				sum_b+=400;
				i++;
			} else if (b[i+1]=='M') {
				sum_b+=900;
				i++;
			} else if (b[i+1]=='C'&&b[i+2]=='C'&&b[i+3]=='C') {
				sum_b+=400;
				i+=3;
			} else sum_b+=100;
		} else if (b[i]=='D') sum_b+=500;
		else if (b[i]=='M') sum_b+=1000;
	}
	return abs(sum_a-sum_b);
}

void convert_ans_to_string(int ans) {
	string s;
	if (ans==0) cout<<"ZERO"<<'\n';
	else {
		int x=ans/1000;
		for (int i=0; i<x; i++) {
			s+="M";
		}
		ans=ans%1000;
		x=ans/100;
		if (x==4) s+="CD";
		else if (x==9) s+="CM";
		else if (x>=5) {
			s+="D";
			int tmp=x;
			for (int i=0; i<tmp-5; i++) {
				s+="C";
			}
		} else {
			for (int i=0; i<x; i++) {
				s+="C";
			}
		}
		ans=ans%100;
		x=ans/10;
		if (x==4) s+="XL";
		else if (x==9) s+="XC";
		else if (x>=5) {
			s+="L";
			int tmp=x;
			for (int i=0; i<tmp-5; i++) {
				s+="X";
			}
		} else {
			for (int i=0; i<x; i++) {
				s+="X";
			}
		}
		ans=ans%10;
		x=ans/1;
		if (x==4) s+="IV";
		else if (x==9) s+="IX";
		else if (x>=5) {
			s+="V";
			int tmp=x;
			for (int i=0; i<tmp-5; i++) {
				s+="I";
			}
		} else {
			for (int i=0; i<x; i++) {
				s+="I";
			}
		}
		cout<<s<<'\n';
	}
}

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	string a,b;
	while (cin>>a>>b && a!="#") {
		int ans=convert_cin_to_num(a,b);
		convert_ans_to_string(ans);
	}
	return 0;
}
