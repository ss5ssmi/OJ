#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[50], tmp = 0, flag = 1;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		sort(a, a+n);
		for(int i=0;i<n;i++){
			if(i<=0) tmp = a[i];
			else {
				if(a[i] - tmp > 1) flag = 0;
				tmp = a[i];
			}
		}
		if(flag || n==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 
