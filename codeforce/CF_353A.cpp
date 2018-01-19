#include<bits/stdc++.h>
using namespace std;
struct node{
	int u,l;
}s[101];
int main() {
	int n,ue=0,uo=0,le=0,lo=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i].u>>s[i].l;
		if(s[i].u%2==0) ue++;
		else uo++;
		if(s[i].l%2==0) le++;
		else lo++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(uo%2==0 && lo%2==0){
			cout<<ans;
			return 0;
		}else{
			if(s[i].u%2==0 && s[i].l%2!=0){
				ue--;
				le++;
				uo++;
				lo--;
				ans++;
			}else if(s[i].u%2!=0 && s[i].l%2==0){
				ue++;
				le--;
				uo--;
				lo++;
				ans++;
			}
		}
	}
	cout<<"-1";
	return 0;
}
