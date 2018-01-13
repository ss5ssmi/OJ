#include<bits/stdc++.h>
using namespace std;
struct node{
	int b,f;
}s[1000];
int cmp(node a,node b){
	return a.b<b.b;
}
int main() {
	int n,ans=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i].b;
		s[i].f=0;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].b<s[j].b && s[j].f==0){
				ans++;
				s[j].f=1;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
