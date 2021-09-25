#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[50] = {0}, b[50] = {0}, ma = 1e9, mb = 1e9;
		long long cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i] < ma) ma = a[i];
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
			if(b[i] < mb) mb = b[i];
		}
		for(int i=0;i<n;i++){
			int ta = a[i]-ma, tb = b[i]-mb;
			cnt += ta>tb?ta:tb;
		}
		printf("%lld\n", cnt);
	}
	return 0;
} 
