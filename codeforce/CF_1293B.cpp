#include<stdio.h>
int main(){
	int n;
	double ans = 0.0;
	scanf("%d",&n);
	while(n){
		ans += 1.0 / (n * 1.0);
		n--;
	}
	printf("%.12lf",ans);
	return 0;
}
