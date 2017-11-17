#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}	
	sort(s,s+n);
	int ans=n;
	long long sum=0;
	for(int i=0;i<n;i++){
		if(sum<=s[i]){
			sum+=s[i];
		}else{
			ans--;
		}
	}
	printf("%d\n",ans);
	return 0;
}
