#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%.0lf\n", ceil(n/2.0)-1);
	}
	return 0;
}
