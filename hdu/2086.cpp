#include<stdio.h>
int main(){
	int n,i;
	double a0,an,c[3005],s;
	while(scanf("%d",&n)!=EOF){
		s=0;
		scanf("%lf%lf",&a0,&an);
		s+=n*a0+an;
		for(i=1;i<=n;i++){
			scanf("%lf",&c[i]);
			s-=2*(n-i+1)*c[i];
		}
		s/=n+1;
		printf("%.2lf\n",s);
	}
	return 0;
}
