#include<stdio.h>
#include<string.h>
int main(){
	char a,b,s[13]={"<^>v<^>v<^>v"};
	int n;
	while(scanf("%c %c",&a,&b)!=EOF){
		scanf("%d",&n);
		getchar();
		if(n>4)	n%=4;
		int i,k;
		for(i=4;i<13;i++){
			if(a==s[i]){
				k=i;
				break;	
			}
		}
		if(s[i+n]==b && s[i-n]==b){
			printf("undefined\n");
		}else if(s[i+n]!=b && s[i-n]==b){
			printf("ccw\n");
		}else if(s[i-n]!=b && s[i+n]==b){
			printf("cw\n");
		}
	}
	return 0;
}
