#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[101][101],s[100]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==1){
				s[i]=1;
			}else if(a[i][j]==2){
				s[j]=1; 
			}else if(a[i][j]==3){
				s[i]=s[j]=1;
			}
		}
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(!s[i]){
			count++;
		}
	}
	printf("%d\n",count);
	for(int i=1;i<=n;i++){
		if(!s[i]){
			printf("%d",i);
			printf("%s",i==n?"\n":" ");
		}
	}
	return 0;
}
