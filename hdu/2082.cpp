#include<stdio.h>
#include<string.h>
int main(){
	int a[27],c1[51],c2[51];
	int i,j,k,n,s;
	scanf("%d",&n);
	while(n--){
		s=0;
		memset(c1,0,sizeof(c1));
		memset(c2,0,sizeof(c2));
		for(i=1;i<=26;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<=50&&i<=a[1];++i){
			c1[i]=1;
		}
		for(i=2;i<=26;++i){
			for(j=0;j<=50;++j)
				for(k=0;k<=a[i]*i&&(k+j)<=50;k+=i){
					c2[j+k]+=c1[j];
				}
				for(j=0;j<=50;++j){
					c1[j]=c2[j];
					c2[j]=0;
				}
		}
		for(i=1;i<=50;i++){
			s+=c1[i];
		}
		printf("%d\n",s);
	}
	return 0;
}
