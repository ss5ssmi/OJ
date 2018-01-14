#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s,ans=-1,x,y;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(x<s || (x==s && y==0)){
			ans=max(ans,y==0?0:100-y);
		}
	}	
	cout<<ans<<endl;
	return 0;
}
