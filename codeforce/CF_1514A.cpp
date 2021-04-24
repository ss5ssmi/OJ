#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100], flag = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			int b = sqrt(a[i]);
			if(b*b != a[i]){
				flag = 1;
				break;
			}
		}
		printf("%s\n", flag?"YES":"NO");
	}
	return 0;
}
