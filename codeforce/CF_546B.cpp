#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[3000];
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	sort(s,s+n);
	int cost=s[0];
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1])
			s[i]++;
		else if(s[i]<s[i-1])
			s[i]+=(s[i-1]-s[i])+1;
		cost+=s[i];
	}
	printf("%d\n",cost-sum);
	return 0;
} 
