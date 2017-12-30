#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000],minn=1e9;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]); 
		minn=min(minn,s[i]);
	}	
	int ans=1e9,t=0;
	for(int i=0;i<n;i++){
		if(s[i]==minn){
			t=i;
			break;
		}
	}
	for(int i=t;i<n;i++){
		if(s[i]==minn && t!=i){
			ans=min(abs(t-i),ans);
			t=i;
		}
	}
	printf("%d\n",ans);
	return 0;
}
