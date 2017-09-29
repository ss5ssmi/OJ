#include<stdio.h>
int main(){
	int y,m,d;
	int m1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int m2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int c,i;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
		c = 0;
		if((y%4==0&&y%100!=0)||(y%400==0)){
			for(i=0;i<m-1;i++){
				c+=m1[i];
			}
			c+=d;
		}else{
			for(i=0;i<m-1;i++){
				c+=m2[i];
			}
			c+=d;
		}
		printf("%d\n",c);
	
	}
	return 0;
}
