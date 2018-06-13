#include<stdio.h>
int main() {
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF) {
		if(a==1 && b==1 && c==1){
			printf("%d\n",a+b+c);
		}else if(a==1 && b==1 && c!=1){
			printf("%d\n",2*c);
		}else if(a==1 && b!=1 && c==1){
			printf("%d\n",a+b+c);
		}else if(a!=1 && b==1 && c==1){
			printf("%d\n",a*2);
		}else if(a==1 && b!=1 && c!=1){
			printf("%d\n",(b+1)*c);
		}else if(a!=1 && b==1 && c!=1){
			if(a>c){
				printf("%d\n",a*(c+1));
			}else{
				printf("%d\n",c*(a+1));
			}
		}else if(a!=1 && b!=1 && c==1){
			printf("%d\n",a*(b+1));
		}else if(a!=1 && b!=1 && c!=1){
			printf("%d\n",a*b*c);
		}
	}
	return 0;
}
