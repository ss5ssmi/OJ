#include<stdio.h>
int main(){
	int n,m,a[1000];
	double b[1000],c,c1,c2,sum=0.0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&c);
		b[i]=c*1.0/a[i];
	}
	c=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(b[i]<b[j]){
				c1=a[i];a[i]=a[j];a[j]=c1;
				c2=b[i];b[i]=b[j];b[j]=c2;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=a[i];j++){
			if(c>=m){
				goto end;
			}
			if(j){
				c++;
				sum+=b[i];
			}
		}
	}
	end:printf("%.2lf\n",sum);
	return 0;
}
