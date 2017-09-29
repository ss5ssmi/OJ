#include<stdio.h>
#include<math.h>
int main(){
	int n,t;
	double x;
	scanf("%d",&t);
	while(t--){
		x=pow(2,0.5)+pow(3,0.5);
		scanf("%d",&n);
		n=2*n; 
		x=pow(x,n);
		
		printf("%.0lf\n",x);
	}
	return 0;
}
