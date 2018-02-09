#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,s[210];
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>s[i];
		}
		s[0]=1;
		s[k+1]=n;
		if(k==1) ans=max(s[1]-1+1,n-s[1]+1);
		else {
		for(int i=1;i<=k;i++){
			if(i==1) ans=max(ans,s[i]-1+1);
			if(i==k) ans=max(ans,n-s[i]+1);
			ans=max(ans,max((s[i]-s[i-1])/2+1,(s[i+1]-s[i])/2+1));
		}
	}
//		printf("ans:");
		printf("%d\n",ans);
	}
	return 0;
}

