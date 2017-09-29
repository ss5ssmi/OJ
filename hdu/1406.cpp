#include<stdio.h>
int zhen(int n){
	int i,s;
	s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(s==n)
		return 1;
	else
		return 0;
}
int main(){
	int n,a,b,t,count,i;
	scanf("%d",&n);
	while(n--){
		count=0;
		scanf("%d%d",&a,&b);
		if(a>b){
			t=a;a=b;b=t;
		}
		for(i=a;i<=b;i++){
			if(zhen(i)){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
