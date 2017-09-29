#include<stdio.h>
#include<math.h>
int main(){
	int m;
	float s,n;
	while(scanf("%f %d",&n,&m)!=EOF){
		s=0;
		while(m--){
			s=s+n;
			n=sqrt(n);
		}
		printf("%.2f\n",s);
	}
	return 0;
}
