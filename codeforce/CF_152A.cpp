#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,ans=0;
	char s[100][100],t[100];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
		for(int j=0;j<m;j++){
			t[j]=max(t[j],s[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]>=t[j]){
				ans++;
				break; 
			}
		} 
	}
	cout<<ans;
	return 0;
}
