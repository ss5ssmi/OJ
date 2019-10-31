#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b,c,d,k;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
		int x = ceil(a*1.0 / c*1.0), y = ceil(b*1.0 / d*1.0);
		if(k >= (x+y)){
			printf("%d %d\n",x,y);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
