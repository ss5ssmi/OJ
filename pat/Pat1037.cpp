#include<stdio.h>
int main(){
	int g1,s1,k1,g2,s2,k2,t1,t2,t;
	scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	t1=k1+(s1*29)+(g1*17*29);
	t2=k2+(s2*29)+(g2*17*29);
	t=t2-t1;
	if(t1>t2){
		t=-t;
		printf("-");
		printf("%d.",t/493);
		t%=493;
		printf("%d.",t/29);
		t%=29;
		printf("%d\n",t);
	}else{
		printf("%d.",t/493);
		t%=493;
		printf("%d.",t/29);
		t%=29;
		printf("%d\n",t);
	}
	 
	return 0;
}
