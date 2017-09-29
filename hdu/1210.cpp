#include<stdio.h>
int main(){
	int n,m,t,pos;
	while(scanf("%d",&n)!=EOF){
		t=2*n+1;
		pos=1;
		m=0;
		while(1){
			pos=pos*2%t;
			m++;
			if(pos==1)
				break;
		}
		printf("%d\n",m);
	}
	return 0;
}
