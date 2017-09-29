#include<stdio.h>
#include<math.h>
double longc(int x,int y){
	double sum;
	int s,i;
	s=x+y;
	if(x==0&&y==0){
		return 0;
	}
	sum=0;
	for(i=1;i<=s;i++){
		sum+=sqrt(i*i+i*i);
		if(i!=1){
			sum+=sqrt((i-1)*(i-1)+i*i);
		}
	}
	sum+=1.0;
	sum-=sqrt(2)*y;
	return sum;
}
int main(){
	int t,x1,y1,x2,y2;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//		if((x1+y1)>(x2+y2)){
//			printf("%.3lf\n",longc(x1,y1)-longc(x2,y2));
//		}else if((x1+y1)<(x2+y2)){
//			printf("%.3lf\n",longc(x2,y2)-longc(x1,y1));
//		}else if((x1+y1)==(x2+y2)){
//			if(x1<x2){
//				printf("%.3lf\n",longc(x2,y2)-longc(x1,y1));
//			}else{
//				printf("%.3lf\n",longc(x1,y1)-longc(x2,y2));
//			}
//		}
		printf("%.3lf\n",fabs(longc(x1,y1)-longc(x2,y2)));
	}
	return 0;
}
