#include<stdio.h>
int main(){
	int a,b,t,i;
	int x=0,y=0;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a>b){
			t=a;a=b;b=t;
		}
		for(i=a;i<=b;i++){
			if(i%2==0){
				x+=i*i;
			}else{
				y+=i*i*i;
			}
		}
		printf("%d %d\n",x,y);
		x=0;y=0;
	}
	return 0;
}

