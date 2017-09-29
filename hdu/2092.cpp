#include<stdio.h>
#include<math.h>
int main(){
	int n,m,s,t;
	while(scanf("%d%d",&n,&m)!=EOF&&(n!=0||m!=0)){
		s=n*n-4*m;
		t=sqrt(s);
		if(t*t==s){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
