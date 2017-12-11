#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,b,d,s[100000];
	scanf("%d%d%d",&n,&b,&d);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int ans=0,t=d;
	for(int i=0;i<n;i++){
		if(s[i]<=b){
			if(t>=s[i]){
				t-=s[i];
			}else{
				t=d;
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
