#include<stdio.h>
int abs(int t){
	return t<0?-t:t;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, s[50];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &s[i]);
		}
		int ans = 1e9;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(abs(s[i]-s[j]) < ans){
					ans = abs(s[i]-s[j]);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
