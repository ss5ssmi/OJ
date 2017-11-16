#include<bits/stdc++.h>
using namespace std;
int main() {
	int na,nb,k,m,a[100000],b[100000];
	scanf("%d%d",&na,&nb);
	scanf("%d%d",&k,&m);
	for(int i=0;i<na;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<nb;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+na);
	sort(b,b+nb);
	for(int i=0;i<k;i++){
		if(a[i]>=b[nb-m]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
