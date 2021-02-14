#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		char s[100001], ans[100001];
		scanf("%d%s", &n, &s);
		for(int i=0;i<n;i++){
			if(i==0){
				s[i]+=1;
				ans[i]='1';
			}else if(s[i-1] != s[i]+1){
				 s[i]+=1;
				 ans[i]='1';
			}else{
				ans[i]='0';
			}
		}
		printf("%s\n", ans);
	}
	return 0;
}
