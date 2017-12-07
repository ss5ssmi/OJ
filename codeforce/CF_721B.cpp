#include<bits/stdc++.h>
using namespace std;
struct node {
	string word;
	int len;
} s[110];
int cmp(node a,node b) {
	return a.len<b.len;
}
int main() {
	int n,k;
	int minn=0,maxx=0;
	string cur;
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++) {
		cin>>s[i].word;
		s[i].len=s[i].word.size();
	}
	cin>>cur;
	sort(s+1,s+n+1,cmp);
	if(s[0].len>=cur.size()) {
		minn=1;
	} else {
		for(int i=1; s[i].len<cur.size() && i<=n; i++) {
			minn++;
			if(i%k==0 && s[i].word!=cur) {
				minn+=5;
			}
//			printf("%d->%d\n",i,minn);
		}
		minn++;
	}
	int i;
	for(i=1; s[i].len<=cur.size() && i<=n; i++) {
		maxx++;
		if(i%k==0) {
			maxx+=5;
		}
//		printf("%d->%d\n",i,maxx);
	}
	if(--i%k==0){
		maxx-=5;
	}
	printf("%d %d\n",minn,maxx);
	return 0;
}
