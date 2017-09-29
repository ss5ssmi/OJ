#include<stdio.h>
#include<string.h> 
int sum;
void sort(int s[],int n){
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(s[j]<s[k]){
				k=j;
			}
		}
		if(k!=i){
			t=s[i];s[i]=s[k];s[k]=t;
			sum++;
		}
	}  
}  
int main(){
	int a[10000],n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sum=0;
		sort(a,n);
		printf("%d\n",sum);
	}
	return 0;
} 
