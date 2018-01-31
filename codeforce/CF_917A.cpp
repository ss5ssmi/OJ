#include<bits/stdc++.h>
using namespace std;
int vis[5000][5000]= {0};
int main() {
	string s;
	cin>>s;
	int l=s.size(),ans=0;
	for(int i=0; i<l; i++) {
		int tmp=0,t=0;
		for(int j=i; j<l; j++) {
			if(s[j]=='(') tmp++;
			else if(s[j]==')') tmp--;
			else tmp--,t++;
			if(tmp<0) {
				if(t>0) t--,tmp=1;
				else break;
			}
			if(tmp==0) ans++;
		}
	}
	cout<<ans;
	return 0;
}
