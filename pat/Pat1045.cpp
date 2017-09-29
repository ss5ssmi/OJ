#include<stdio.h>
#include<algorithm> 
using namespace std; 
int main(){
	int n,t=0,max=0,l=0;
	int a[100000],b[100000],c[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(max<b[i]){
			max=b[i];
		}
		if(a[i]==b[i] && b[i]==max){
			c[l++]=b[i];
			t++;
		}
	}
	
	printf("%d\n",t);
	for(int i=0;i<l;i++){
		printf("%d",c[i]);
		if(i!=l-1){
			printf(" ");
		}
	}printf("\n");
	return 0;
}
