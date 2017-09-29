#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int q[1000],s[1000];
	int b,r,i,j,k,x,f=0;
	memset(s,0,sizeof(q));
	while(scanf("%s%d",&a,&b)!=EOF){
		j=x=0;
		for(i=0;i<strlen(a);i++){
			s[i]=a[i]-'0';
		}
		for(i=0,j=0;i<strlen(a);i++){
			x=x*10+s[i];
			if(x>=b){
				printf("%d",x/b);
				f=1;
			}else if(f){
				printf("0");
			}
			x%=b;
		}
		if(f==0){
			printf("0");
		}printf(" %d\n",x);
	}
	return 0;
} 
