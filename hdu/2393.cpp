#include<stdio.h>
#include<math.h>
int main(){
	int t,a,b,c,n=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&a,&b,&c);
		if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
			printf("Scenario #%d:\n",n++);
			printf("yes\n\n");
		}else{
			printf("Scenario #%d:\n",n++);
			printf("no\n\n");
		}
	}
	return 0;
} 
