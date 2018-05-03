#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s,h[100],m[100],ans;
	cin>>n>>s;
	for(int i=0; i<n; i++) {
		cin>>h[i]>>m[i];
	}
	for(int i=0; i<n; i++) {
		if(i==0){
			if(h[i]*60+m[i] > s){
				printf("0 0\n");
				return 0;
			}
		}else{
			int tmp1 = h[i-1]*60+m[i-1],tmp2 = h[i]*60+m[i];
			if( tmp2-tmp1-1 > 2*s){
				int ans = tmp1+s+1;
				printf("%d %d\n",ans/60,ans%60);
				return 0;
			}
		}
	}
	ans = h[n-1]*60+m[n-1]+s+1;
	printf("%d %d\n",ans/60,ans%60);
	return 0;
}
