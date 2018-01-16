#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
}s[200];
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].x>>s[i].y;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int fl=0,fr=0,fu=0,fd=0;
		for(int j=0;j<n;j++){
			if(s[i].x==s[j].x && s[i].y<s[j].y) fu=1;
			if(s[i].x==s[j].x && s[i].y>s[j].y) fd=1;
			if(s[i].x>s[j].x && s[i].y==s[j].y) fl=1;
			if(s[i].x<s[j].x && s[i].y==s[j].y) fr=1;
		}
		if(fl && fr && fu && fd) ans++;
	}
	cout<<ans;
	return 0;
}
