#include<stdio.h>
int main(){
	int n,d,k,count;
	double e,ek,kn=0,kz=0;
	scanf("%d %lf %d",&n,&e,&d);
	for(int i=0;i<n;i++){
		count=0;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%lf",&ek);
			if(ek<e){
				count++;
			}
		}
		if(count>k/2){
			if(k>d)
				kz++;
			else
				kn++;
		}
	}
	printf("%.1lf%% %.1lf%%",(kn/n*1.0)*100,(kz/n*1.0)*100);
	return 0;
}
