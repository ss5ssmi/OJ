#include<stdio.h>
int main(){
	int a[100],b[100],c[100];
	int n,m,i,j,s,t,f;
	while(scanf("%d%d",&n,&m)!=EOF&&(n||m)){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(j=0;j<m;j++){
			scanf("%d",&b[j]);
		}
		for(i=0,s=0;i<n;i++){
			f=1;
			for(j=0;j<m;j++)
				if(a[i]==b[j]){
					f=0;break;
				}
			if(f){
				c[s]=a[i];
				s++;
			}
		}
		if(s){
			for(i=0;i<s;i++)
				for(j=i+1;j<s;j++)
					if(c[i]>c[j]){
						t=c[i];c[i]=c[j];c[j]=t;
					}
			for(i=0;i<s;i++)
				printf("%d ",c[i]);
			printf("\n");
		}else
			printf("NULL\n");
	}
	return 0;
}
