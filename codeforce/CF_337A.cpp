#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int m,n,a[50],mins=1000;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<=n-m;i++){
		if((a[i+m-1]-a[i])<mins){
			mins=a[i+m-1]-a[i];
			
		}
	}
	printf("%d\n",mins);
	return 0;
}
