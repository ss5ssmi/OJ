#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char s[105];
	scanf("%d",&t);
	while(t--) {
		scanf("%s",&s);
		int len=strlen(s);
		for(int k,i=1; i<=len; i++) {
			if(len%i==0) {
				for(k=i;k<len;k++){
					 if(s[k]!=s[k%i]){
					 	break;
					 }
				}
				if(k==len){
					printf("%d\n",i);
					break;
				}
			}
		}
		if(t) printf("\n");
	}
	return 0;
}
