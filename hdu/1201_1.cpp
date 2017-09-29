#include<stdio.h>
int main(){
	int n,s,i,y,m,d;
	scanf("%d",&n);
	while(n--){
		s=0;
		scanf("%d-%d-%d",&y,&m,&d);
		if(m==2&&d==29){
			printf("-1\n");
			continue;
		}
		if(m<=2){
			for(i=y;i<=y+17;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
				s+=366;
			else
				s+=365;
			}
		}else{
			for(i=y+1;i<=y+18;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
				s+=366;
			else
				s+=365;
			}
		}
		printf("%d\n",s);
	} 
	return 0;
}
