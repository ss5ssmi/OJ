#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,k,t,ans=0;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t==1){
			if(m>0) m--;
			else ans++;
		} else {
			if(k>0) k--;
			else if(m>0) m--;
			else ans++;
		}
	}
	cout<<ans;
	return 0;
}
