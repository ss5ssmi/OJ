#include<stdio.h>
void cmp(int* a, int* b){
	if(*a > *b){
		int t = *b;
		*b = *a;
		*a = t;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a1, b1, a2, b2;
		scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
		cmp(&a1, &b1);
		cmp(&a2, &b2);
		if(b1 == b2 && (a1 + a2) == b1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
