#include<stdio.h>
int main(){
	int y,m,d;
	int c;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
		c=0;
		if((y%4==0&&y%100!=0)||(y%400==0)){
			if(m<=1){
				c+=d;
			}else if(m<=2){
				c+=d;
				c+=31;
			}else if(m<=3){
				c+=d;
				c+=31+29;
			}else if(m<=4){
				c+=d;
				c+=31+29+31;
			}else if(m<=5){
				c+=d;
				c+=31+29+31+30;
			}else if(m<=6){
				c+=d;
				c+=31+29+31+30+31;
			}else if(m<=7){
				c+=d;
				c+=31+29+31+30+31+30;
			}else if(m<=8){
				c+=d;
				c+=31+29+31+30+31+30+31;
			}else if(m<=9){
				c+=d;
				c+=31+29+31+30+31+30+31+31;
			}else if(m<=10){
				c+=d;
				c+=31+29+31+30+31+30+31+31+30;
			}else if(m<=11){
				c+=d;
				c+=31+29+31+30+31+30+31+31+30+31;
			}else if(m<=12){
				c+=d;
				c+=31+29+31+30+31+30+31+31+30+31+30;
			}
			printf("%d\n",c);
		}else{
			if(m<=1){
				c+=d;
			}else if(m<=2){
				c+=d;
				c+=31;
			}else if(m<=3){
				c+=d;
				c+=31+28;
			}else if(m<=4){
				c+=d;
				c+=31+28+31;
			}else if(m<=5){
				c+=d;
				c+=31+28+31+30;
			}else if(m<=6){
				c+=d;
				c+=31+28+31+30+31;
			}else if(m<=7){
				c+=d;
				c+=31+28+31+30+31+30;
			}else if(m<=8){
				c+=d;
				c+=31+28+31+30+31+30+31;
			}else if(m<=9){
				c+=d;
				c+=31+28+31+30+31+30+31+31;
			}else if(m<=10){
				c+=d;
				c+=31+28+31+30+31+30+31+31+30;
			}else if(m<=11){
				c+=d;
				c+=31+28+31+30+31+30+31+31+30+31;
			}else if(m<=12){
				c+=d;
				c+=31+28+31+30+31+30+31+31+30+31+30;
			}
			printf("%d\n",c);
		}
	}
	return 0;
}
