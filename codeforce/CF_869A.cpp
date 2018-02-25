#include<bits/stdc++.h>
using namespace std;
int s[2010*2010];
int main(){
	int a[2000],b[2000],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[a[i]]=1;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		s[b[i]]=1;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[a[i]^b[j]]) cnt++;
		}
	}
	if(cnt%2) cout<<"Koyomi";
	else cout<<"Karen";
	return 0;
}
