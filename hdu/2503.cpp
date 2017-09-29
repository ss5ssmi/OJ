#include<stdio.h>
int gcd(int a,int b){
	return b==0? a:(gcd(b,a%b));
} 
int main(){
	int t,a,b,c,d;
	double x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		x=b*d;
		y=a*d+b*c;
		printf("%.0lf %.0lf\n",y/gcd(x,y),x/gcd(x,y));
	}
	return 0;
}
