#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int s[10]={0};
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			int m=i;
			while(m){
				s[m%10]++;
				m/=10;
			}
		}
		for(int i=0;i<10;i++){
			printf("%d",s[i]);
			if(i!=9) printf(" ");
			else printf("\n");
		} 
	}
	return 0;
}
