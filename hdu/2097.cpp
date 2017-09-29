#include<stdio.h>
int main(){
	int x,s1,s2,m;
	while(scanf("%d",&x)&&x!=0){	
		s1=s2=m=0;
		
		m+=x%10;
		m+=x/10%10;
		m+=x/100%10;
		m+=x/1000;
		
		s1+=x%12;
		s1+=x/12%12;
		s1+=x/12/12%12;
		s1+=x/12/12/12%12;

		s2+=x%16;
		s2+=x/16%16;
		s2+=x/16/16%16;
		s2+=x/16/16/16%16;

		if(m==s2&&m==s1){
			printf("%d is a Sky Number.\n",x);
		}else{
			printf("%d is not a Sky Number.\n",x);
		}
	}
	return 0;
}

