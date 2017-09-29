#include<stdio.h>
int main(){
	int m,n;
	int a,b,c,i,flower,f[100];
	while(scanf("%d %d",&m,&n)!=EOF){
		a=b=c=i=flower=0;
		for(i=m;i<=n;i++){
			a=i/100;b=i/10%10;c=i%10;
			if((a*a*a+b*b*b+c*c*c)==i){
				f[flower]=i;
				flower++;
			}
		}
		if(flower==0){
			printf("no\n");
		}else{
			for(i=0;i<flower-1;i++){
				printf("%d ",f[i]);
			}
			printf("%d\n",f[flower-1]);
		}
	}
	return 0;
}
