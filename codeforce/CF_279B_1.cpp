#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main() {
	int n,t,a;
	queue<int> s,tmp;
	int k=0,ans=0;
	scanf("%d%d",&n,&t);
	for(int i=0; i<n; i++) {
		scanf("%d",&a);
		while(t<a && !s.empty()) {
			t+=s.front();
			s.pop();
		}
		if(t>=a) {
			s.push(a);
			t-=a;
		}
//		tmp=s;
//		while(!tmp.empty()) {
//			printf("%d ",tmp.front());
//			tmp.pop();
//		}
//		printf("\n");
		int ss=s.size();
		ans=max(ans,ss);
	}
	printf("%d\n",ans);
	return 0;
}
