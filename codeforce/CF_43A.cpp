#include<bits/stdc++.h>
using namespace std;
int main() {
	map<string,int> s;
	int n,maxx=0;
	string t,ans;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>t;
		s[t]++;
		if(s[t]>maxx){
			maxx=s[t];
			ans=t;
		}
	} 
	cout<<ans<<endl;
	return 0;
}
