#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	map<char,char> A;
	map<char,char>::iterator it;
	A['1']='`',A['2']='1',A['3']='2',A['4']='3';

	A['5']='4',A['6']='5',A['7']='6',A['8']='7';

	A['9']='8',A['0']='9',A['-']='0',A['=']='-';

	A['W']='Q',A['E']='W',A['R']='E',A['T']='R';

	A['Y']='T',A['U']='Y',A['I']='U',A['O']='I';

	A['P']='O',A['[']='P',A[']']='[',A[92]=']';

	A['S']='A',A['D']='S',A['F']='D',A['G']='F';

	A['H']='G',A['J']='H',A['K']='J',A['L']='K';

	A[';']='L',A[39]=';',A['X']='Z',A['C']='X';

	A['V']='C',A['B']='V',A['N']='B',A['M']='N';

	A[',']='M',A['.']=',',A['/']='.',A[' ']=' ';
	string s;
	while (getline(cin,s)){
		for (int i=0;i<s.length();i++){
			cout<<A[s[i]];
			(i==s.length()-1)?cout<<'\n':cout<<"";
		}
	}
	return 0;
}
