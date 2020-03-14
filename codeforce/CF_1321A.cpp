#include<stdio.h>
#include<math.h>
int main(){
	int n, r[100], b[100], cntr= 0, cntb = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		if(!r[i] && b[i]) cntb++;
		if(r[i] && !b[i]) cntr++;
	}
	if(cntr){
		printf("%.0f\n", ceil( (cntb+1.0)/ cntr) );
	}else{
		printf("-1\n");
	}
	return 0;
}
