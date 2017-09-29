#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int cmp(int a,int b){
	if(a>b)
		return 1;
	else
		return 0;
}
int main(){
	int N,a[10000];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	int m,n,min=N;
	for(int i=0;i<=N;i++){
		for(int j=0;j<=i;j++){
			if(i*j==N && i-j<min){
				min=i-j;
				m=i;n=j;
			}
		}
	}
	sort(a,a+N,cmp);
	int b[m][n];
	memset(b,0,sizeof(b));
	int t=0,i=0,j=0;
	b[i][j]=a[t++];
	while(N--){
		while(j+1<n && !b[i][j+1]) b[i][++j]=a[t++];
		while(i+1<m && !b[i+1][j]) b[++i][j]=a[t++];
		while(i-1>=0 && !b[i-1][j]) b[--i][j]=a[t++];
		while(j-1>=0 && !b[i][j-1]) b[i][--j]=a[t++];
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
			if(j!=n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
} 
