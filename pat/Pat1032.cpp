#include<stdio.h>
int p[100000]={0};
int main(){
	int n,t,s,mp,max=-1;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&t,&s);
		p[t]+=s;
	}
	for(int i=0;i<100000;i++){
		if(p[i]>max){
			max=p[i];
			mp=i;
		} 
	}
	printf("%d %d\n",mp,max);
	return 0;
} 
