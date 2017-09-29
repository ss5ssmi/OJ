#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int n,i,j,l;
	while(scanf("%d",&n)!=EOF){
		getchar();
		for(i=0;i<n;i++){
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			scanf("%s",&a);
			l=strlen(a);
			for(j=l-1;j>=0;j--){
				b[j]=a[l-1-j];
			}
			if(strcmp(a,b)==0){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}
