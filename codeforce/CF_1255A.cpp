#include<stdio.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		if(a == b){
			printf("0\n");
		}else{
			int distance = a-b > b-a ? a-b : b-a;
			int cnt = distance / 5;
			distance %= 5;
			cnt += distance / 2;
			distance %= 2;
			cnt += distance;
			printf("%d\n",cnt);
		}
	}
	return 0;
}
