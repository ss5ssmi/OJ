#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, l, r, k, a[100], cnt = 0;
		scanf("%d%d%d%d", &n, &l, &r, &k);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		sort(a, a+n);
		for(int i=0;i<n;i++){
			if(a[i]<=k && a[i] <= r && a[i] >= l){
				k-=a[i];
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
} 
