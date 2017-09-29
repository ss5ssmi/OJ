#include<stdio.h>
int main(){
	int m,n,i,j,k,flag,sum;
	int s[50][5],x,y;
	double l[5],c[50];
	while(scanf("%d %d",&n,&m)!=EOF&&n&&m&&n<=50&&m<=5){
		l[5]=c[50]=0;x=y=sum=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&s[i][j]);
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				x+=s[i][j];
			}
			c[i]=1.0*x/m;
			x=0;
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				y+=s[j][i];
			}
			l[i]=1.0*y/n;
			y=0;
		}
		for(k=0;k<n-1;k++){
			printf("%.2lf ",c[k]);
		}
		printf("%.2lf\n",c[n-1]);
		for(k=0;k<m-1;k++){
			printf("%.2lf ",l[k]);
		}
		printf("%.2lf\n",l[m-1]);
		
		for(i=0;i<n;i++){
			flag=0;
			for(j=0;j<m;j++){
				if(s[i][j]>=l[j]){
					flag++;
				}
				if(flag==m){
					sum++;
				}
			}
		}
		printf("%d\n\n",sum);		
	}
	return 0;
}
