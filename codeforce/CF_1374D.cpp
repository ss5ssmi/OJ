#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, a[200000], flag = 1, cnt = 0, x = 0;
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%k) flag = 0;
		}
		sort(a,a+n);
		if(!flag){
			for(int i=0;i<n;i++){
				if(a[i]%k!=0){
					
				}
			}
		}
		printf("%d\n", cnt); 
	}
	return 0;
} 
