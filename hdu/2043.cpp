#include<stdio.h>
#include<string.h>
int main(){
	int m,n,l,i,a,b,c,d,count;
	char sw[50];
	scanf("%d",&m);
	getchar();
	while(m--){
		a=b=c=d=count=0;
		gets(sw);
		l=strlen(sw);
		if(l>=8&&l<=16){
			for(i=0;i<l;i++){
			if(sw[i]>='a'&&sw[i]<='z')
				a=1;
			}
			for(i=0;i<l;i++){
				if(sw[i]>='A'&&sw[i]<='Z')
				b=1;
			}
			for(i=0;i<l;i++){
				if(sw[i]>='0'&&sw[i]<='9')
				c=1;
			}
			for(i=0;i<l;i++){
				if(sw[i]=='~'||sw[i]=='!'||sw[i]=='@'||sw[i]=='#'||sw[i]=='$'||sw[i]=='%'||sw[i]=='^')
				d=1;
			}
			count=a+b+c+d;
			if(count>=3)
			printf("YES\n");
		else
			printf("NO\n");
		}else
			printf("NO\n");
	}
	return 0;
}
