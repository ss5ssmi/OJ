#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,s[100];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]<=k){
			cnt++;
		}else{
			break;
		}
	}
	if(cnt!=n){
		for(int i=n-1;i>=0;i--){
			if(s[i]<=k){
				cnt++;
			}else{
				break;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
