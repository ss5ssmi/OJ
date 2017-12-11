#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
	int n,t,ans=0;
	map<int,int> s;
	scanf("%d",&n);
	for(int i=0; i<2*n; i++) {
		scanf("%d",&t);
		s[t]++;
		if(s[t]==2){
			s.erase(t);
		}
		int tmp=s.size();
		ans=max(ans,tmp);
	}
	printf("%d\n",ans);
	return 0;
}
