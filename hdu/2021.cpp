#include<stdio.h>
int main(){
	int n,sum,i,s[100],a[6]={0};
	while(scanf("%d",&n)!=EOF&&n!=0){
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
			a[0]=s[i]/100;
			a[1]=(s[i]-100*a[0])/50;
			a[2]=(s[i]-100*a[0]-50*a[1])/10;
			a[3]=(s[i]-100*a[0]-50*a[1]-10*a[2])/5;
			a[4]=(s[i]-100*a[0]-50*a[1]-10*a[2]-5*a[3])/2;
			a[5]=(s[i]-100*a[0]-50*a[1]-10*a[2]-5*a[3]-2*a[4])/1;
			sum+=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
		}
		printf("%d\n",sum);
	}
	return 0;
}
