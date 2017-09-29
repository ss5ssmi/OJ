#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,l;
	char a[50];
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
			gets(a);
			l=strlen(a);
			j=0;
			if(!(a[0]=='_'||a[0]-'a'>=0&&a[0]-'z'<=0||a[0]-'A'>=0&&a[0]-'Z'<=0)){
				printf("no\n");
			}else{
			for(i=1;i<l;i++){
				if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||a[i]-'A'>=0&&a[i]-'Z'<=0||a[i]=='_'){
					j++;
				}
			}
				if(j==l-1)
					printf("yes\n");
				else
					printf("no\n");
			}
		}
	}
	return 0;
}
