#include<bits/stdc++.h>
using namespace std;
int n,x[1001]= {0},y[1001]= {0};
bool v[1001];
void dfs(int t){
	v[t]=true;
	for(int i=0;i<n;i++){
		if(!v[i] && (x[i]==x[t] || y[i]==y[t])){
			dfs(i);
		}
	}
}
int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x[i]>>y[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(!v[i]){
			dfs(i);
			ans++; 
		}
	}
	cout<<ans-1;
	return 0;
}
