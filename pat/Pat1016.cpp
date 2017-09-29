#include<stdio.h>
int main(){
	int a,b,da,db,pa,pb,x,y;
	while(scanf("%d%d%d%d",&a,&da,&b,&db)!=EOF){
		x=y=pa=pb=0;
		while(a){
			if(a%10==da){
				x++;
			}
			a/=10;
		}
		while(b){
			if(b%10==db){
				y++;
			}
			b/=10;
		}
		for(int i=0;i<x;i++){
			pa+=da;
			if(i!=x-1){
				pa*=10;
			} 
		}
		for(int i=0;i<y;i++){
			pb+=db;
			if(i!=y-1){
				pb*=10;
			} 
		}
		printf("%d\n",pa+pb);
	}
	return 0;
} 
