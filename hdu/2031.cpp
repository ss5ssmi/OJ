#include<stdio.h>
#include<math.h>
int main(){
	int n,r,i,j,a[100];
	char s[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(scanf("%d%d",&n,&r)!=EOF){
		i=0;j=abs(n);
		while(j){
			a[i]=j%r;
			i++;
			j=j/r;
		}
		if(n<0){
			printf("-");
		}
		for(i-=1;i>=0;i--){
			printf("%c",s[a[i]]);
		}
		printf("\n");
	} 
	return 0;
}
