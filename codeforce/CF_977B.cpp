#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,maxx=0;
	string s,ans;
	map<string,int> m;
	cin>>n>>s;
	for(int i=0; i<n-1; i++) {
		string tmp = s.substr(i,2);
		m[tmp]+=1;
		if(m[tmp]>maxx){
			maxx=m[tmp];
			ans=tmp;
		}
	}
	cout<<ans<<endl;
	return 0;
}
