#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, a[30], b[30], cnt = 0;
		scanf("%d%d", &n, &k);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			cnt += a[i]; 
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		sort(a, a+n);
		sort(b, b+n);
		for(int i=0;i<k;i++){
			if(a[i] < b[n-i-1]){
				cnt -= a[i];
				cnt += b[n-i-1];
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
