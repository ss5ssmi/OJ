#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,t[26]={0},sum=0,maxt=-1;
	char s[100];
	scanf("%d%d",&n,&k);
	scanf("%s",s);
	for(int i=0;i<n;i++){
		t[s[i]-'a']++;
	}
	sort(t,t+26);
	for(int i=1;i<26;i++){
		sum=max(sum,t[i]);
	}
	if(sum<=k) printf("YES\n");
	else printf("NO\n");
	return 0;
}
