#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,c;
	int tmp,k=0,ans=0;
	cin>>n>>t>>c;
	for(int i=0;i<n;i++){
		cin>>tmp;
		if(tmp<=t) k++;
		else k=0;
		if(k>=c) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
