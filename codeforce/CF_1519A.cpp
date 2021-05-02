#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int r, b, d;
		scanf("%d%d%d", &r, &b, &d);
		double max = (r>b?r:b)*1.0, min = (r<b?r:b)*1.0;
		if((max/min)-1.0 > d*1.0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	} 
	return 0;
} 
