#include<stdio.h>
int main(){
	int n,a,b,s[100000]={0},p[100000]={0},d[50000];
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		s[a]=b;
		s[b]=a;
	}
	scanf("%d",&n);
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		p[a]=1;
	}
	int j=0;
	for(int i=0;i<100000;i++){
		if(p[i]==1&&p[s[i]]==0){
			count++;
			d[j++]=i;
		}
	}
		printf("%d\n",count);
	for(int i=0;i<count;i++){
		printf("%05d",d[i]);
		if(i!=count-1){
			printf(" ");
		}
	}
	return 0;
} 
