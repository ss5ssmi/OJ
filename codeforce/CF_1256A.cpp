#include<stdio.h>
int main(){
	int t,a,b,n,s;
	scanf("%d",&t);	
	while(t--){
		scanf("%d %d %d %d",&a,&b,&n,&s);
		int tmp = s/n;
		tmp = tmp >= a ? a : tmp;
		if( (s - (tmp * n)) <= b ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
