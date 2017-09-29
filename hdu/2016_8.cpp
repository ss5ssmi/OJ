#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	int n;
	double l;
	while(scanf("%d",&n)!=EOF){
		for(a=0;a*a<=n;a++){
			for(b=0;b*b<=n;b++){
				for(c=0;c*c<=n;c++){
					l=sqrt(n-a*a-b*b-c*c);
					if(l==(int)l){
						printf("%d %d %d %d\n",a,b,c,(int)l);
						goto end;
					}
				}
			}
		}
		end:;
	}
	return 0;
}
