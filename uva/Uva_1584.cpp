#include<stdio.h>
#include<string.h>
#define maxn 105
int less(const char* s,int p,int q)
{
	int n=strlen(s);
	for(int i=0; i<n; i++) {
		if(s[(i+p)%n] != s[(i+q)%n]){
			return s[(i+p)%n] < s[(i+q)%n];
		}
	}
	return 0;
}
int main()
{
	int t;
	char s[maxn];
	scanf("%d",&t);
	while(t--) {
		scanf("%s",&s);
		int ans=0;
		int len=strlen(s);
		for(int i=1; i<len; i++) {
			if(less(s,i,ans)) ans=i;
		}
		for(int i=0;i<len;i++){
			printf("%c",s[(i+ans)%len]);
		}
		printf("\n");
	}
	return 0;
}
