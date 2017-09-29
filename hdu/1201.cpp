#include<stdio.h>
int main(){
	int n,y,m,d,s,i;
	int r[12]={31,29,31,30,31,30,31,31,30,31,30,31},l[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	while(n--){
		s=0;
		scanf("%d-%d-%d",&y,&m,&d);
		if(m==2&&d==29){
			printf("-1\n");
			continue;
		}
		for(i=y+1;i<=y+17;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
				s+=366;
			else
				s+=365;
		}
		if((y%4==0&&y%100!=0)||(y%400==0)){
			for(i=m;i<12;i++){
				s+=r[i];
			}
			s-=d;
		}else{
			for(i=m;i<12;i++){
				s+=l[i];
			}
			s-=d;
		}
		if((y+18%4==0&&y+18%100!=0)||(y+18%400==0)){
			for(i=0;i<m;i++){
				s+=r[i];
			}
			s+=d;
		}else{
			for(i=0;i<m;i++){
				s+=l[i];
			}
			s+=d;
		}
		printf("%d\n",s);
	}
	return 0;
}
