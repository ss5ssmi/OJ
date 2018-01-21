#include<bits/stdc++.h>
using namespace std;
int main() {
	string n;
	int k;
	cin>>n>>k;
	int l=n.size(),tmp=0,ans=0; 
	for(int i=l-1;i>=0;i--){
		if(n[i]!='0') ans++;
		else tmp++;
		if(tmp==k) break;
	}
	cout<<(tmp<k?l-1:ans);
	return 0;
}
