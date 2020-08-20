#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main (){
	int n;
	while (cin>>n && n!=0){
		queue<int> que;
		vector<int> ans; // push_back()
		for (int i=1;i<=n;i++){
			que.push(i);
		}
		while (que.size()>1){
			int tmp=que.front();
			ans.push_back(tmp);
			que.pop();
			tmp=que.front();
			que.push(tmp);
			que.pop();
		}
		cout<<"Discarded cards:";
		if (n==1){
			cout<<'\n';
		}
		else {
			for (int i=0;i<ans.size();i++){
				cout<<' ';
				cout<<ans[i];
				cout<<(i+1==ans.size()?'\n':','); //(condition ? 1 : 0)
			}
		}
		cout<<"Remaining card: "<<que.front()<<'\n';
	}
	return 0;
}
