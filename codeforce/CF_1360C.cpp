#include<stdio.h>
int abs(int a){
	return a<0?-a:a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[50], e = 0, o = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%2) o++;
			else e++;
		}
		if(o%2 != e%2){
			printf("NO\n");
		}else if(o%2 == 1 && e%2 == 1){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j && a[i]%2 != a[j] && abs(a[i]-a[j]) == 1){
						printf("YES\n");
						goto end;
					}
				}
			}
			printf("NO\n");
			end:;
		}else{
			printf("YES\n");
		}
		
	}
	return 0;
}
