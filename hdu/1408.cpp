#include<stdio.h>
int main(){
	double v,d;
	int i,j,count;
	while(scanf("%lf%lf",&v,&d)!=EOF){
		count=w=0;
		for(i=1;v>0;i++){
			for(j=1;j<=i&&v>0;j++){
				count++;
				v-=d;
			}
		}
		printf("%d\n",count+i-2);
	}
	return 0;
}
