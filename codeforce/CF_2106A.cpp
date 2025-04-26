#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,cnt = 0;
		char s[11];
		scanf("%d", &n);
		scanf("%s", &s);
		for(int i=0; i<n; i++){
			s[i] = s[i]=='1'?'0':'1';
			for(int i = 0; i<n; i++){
				cnt+=s[i]-'0';
			}
			s[i] = s[i]=='1'?'0':'1';
		}
		printf("%d\n", cnt);
	}
	return 0;
} 
