#include<stdio.h>
#include<math.h>
int main(){
	float s;
	int m,n,i;
//	x=pow(-1,n-1)*(1/n);
	scanf("%d\n",&m);
	while(m--){
		s=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			s+=pow(-1,i-1)*(1.0/i);
		}
		printf("%.2f\n",s);
	}
	return 0;
}
