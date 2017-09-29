#include<stdio.h>
int main(){
	int n,s[10],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum+=s[i]*10+s[j];
			sum+=s[j]*10+s[i];
		}
	}
	printf("%d\n",sum);
	return 0;
}
