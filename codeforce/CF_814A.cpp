#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main() {
	int n,k,a[100],b[100];
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		scanf("%d",&b[i]);
	}
	sort(b,b+k,cmp);

	for(int i=0,j=0;i<n && j<k;i++){
		if(a[i]==0){
			a[i]=b[j++];
		}
	}
	
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
