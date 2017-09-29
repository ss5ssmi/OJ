#include<stdio.h>
int isPrime(int n){
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
		return 1;
	else
		return 0;
}
int main(){
	int m,a,b,i,j,n;
	while(scanf("%d",&m)!=EOF){
		n=m/2;
		for(i=j=n;i<m;i++,j--){
			a=isPrime(i);
			b=isPrime(j);
			if(a==1&&b==1&&i+j==m){
				printf("%d %d\n",j,i);
				break;
			}
		}
	}
}
