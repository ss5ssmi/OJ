#include<stdio.h>
#include<string.h>
int s[1000010];
int main(){
	int n,x,t;
	while(scanf("%d",&n)!=EOF&&n){
//		memset(s,0,sizeof(s));
		for(int i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		for(int i=0;i<n;i++){
			t=1;
			for(int j=0;j<n;j++){
				if(i==j) continue;
				if(s[i]==s[j]){
					t=0;
					break;
				}
			}
			if(t){
				printf("%d\n",s[i]);
				break;
			}
		}
	}
	return 0;
}
