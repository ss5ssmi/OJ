#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, a[1001], sum = 0;
		scanf("%d%d",&n ,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum += a[i];
		}
		if( (double)sum >= m ){
			printf("%d\n", m);
		}else{
			printf("%d\n", sum);
		}
	}
	return 0;
}
