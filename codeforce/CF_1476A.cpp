#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d%d", &n, &k);
		double a = n, b = k;
		if(a>b) printf("%.0lf\n", ceil((ceil(a/b))*b/a) );
		else printf("%.0lf\n", ceil(b/a) );
	}
	return 0;
}
