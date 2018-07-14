#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,s[110]={0},ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s[t]++;
		ans=max(ans,s[t]); 
	}
	printf("%d\n",ans);
	return 0;
}
