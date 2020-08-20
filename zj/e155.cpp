#include <iostream>
#include <queue>
using namespace std;

int main (){
	int n;
	while (cin>>n && n!=0){
		queue<int> que;
		queue<int> ans;
		for (int i=1;i<=n;i++){
			que.push(i);
		}
		while (que.size()>1){
			int tmp=que.front();
			ans.push(tmp);
			que.pop();
			tmp=que.front();
			que.push(tmp);
			que.pop();
		}
		cout<<"Discarded cards:";
		while (ans.size()>1){
			cout<<' '<<ans.front()<<',';
			ans.pop();
		}
		if (ans.size()>0){
			cout<<' '<<ans.front()<<'\n';
		}
		else cout<<'\n';
		cout<<"Remaining card: "<<que.front()<<'\n';
	}
	return 0;
}
