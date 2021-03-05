#include<stdio.h>
int main(){
	int n,q,a[100000], t, b, zero = 0, one = 0;
	scanf("%d%d", &n, &q);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]) one++;
		else zero++;
	}
	for(int i=0;i<q;i++){
		scanf("%d%d", &t, &b);
		if(t==1){
			if(a[b-1]) one--,zero++;
			else one++,zero--;
			a[b-1] = 1-a[b-1];
		} else {
			printf("%d\n", b>one?0:1);
		}
	}
}
