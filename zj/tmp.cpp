#include <bits/stdc++.h>
using namespace std;

int K (int p[], int v) {
 if (p[v]!=v) {
p[v] = K(p, p[v]);
 }
 return p[v];
}
void G (int p[], int l, int r) {
 int a=K(p, l), b=K(p, r);
 if (a!=b) {
p[b] = a;
 }
}
int main (void) {
 int p[5]={0, 1, 2, 3, 4};
 G(p, 0, 1);
 G(p, 2, 4);
 G(p, 0, 4);
 for (int i=0;i<5;i++){
 	cout<<p[i];
 	cout<<((i==4)?'\n':' ');
 }
 return 0;
}
