#include<stdio.h>
#include<math.h>
int main(){
	int q,n,a[100];
	scanf("%d",&q);
	while(q--){
		int sum = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int t = 0;
			scanf("%d",&t);
			sum += t;
		}
		float summ = (float)sum;
		float cnt = (float)n;
		printf("%.0f\n",ceil(summ/cnt));
	}
	return 0;
}
