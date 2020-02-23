#include<stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int t, a, b, c, r;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a, &b, &c, &r);
		if(a > b) swap(&a, &b);
		int ans = 0, left = c - r, right = c + r;
		if(right <= a || left >= b){
			ans += b - a;
		}else if(left >= a && right <= b){
			ans += b - right + left - a;
		}else if(left > a && left < b && right > b){
			ans += left - a;
		}else if(right > a && right < b && left < a){
			ans += b - right;
		}
		printf("%d\n",ans);
	}
	return 0;
}
