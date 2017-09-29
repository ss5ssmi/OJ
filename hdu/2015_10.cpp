#include<stdio.h>
#include<math.h> 
int main(){
	int s[100][11];
	int w,m,n,a,b,i,j;
	while(scanf("%d%d%d",&w,&m,&n)!=EOF){
		int k=1;
		a=b=0;
		for(i=1;i<100;i++){
			if(i%2==0){
				for(j=w;j>0;j--){
				s[i][j]=k++;
				if(s[i][j]==m){
					a=i+j;
				}
				if(s[i][j]==n){
					b=i+j;
				}
			}
			}else{
				for(j=1;j<=w;j++){
				s[i][j]=k++;
				if(s[i][j]==m){
					a=i+j;
				}
				if(s[i][j]==n){
					b=i+j;
				}
			}
			}
			
		}
		printf("%d\n",abs(a-b));
	}
	return 0;
}
