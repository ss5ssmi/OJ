#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, k1, k2, a[110]={0}, b[110]={0};
		scanf("%d%d%d",&n, &k1, &k2);
		for(int i=0;i<k1;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<k2;i++){
			scanf("%d",&b[i]);
		}
		sort(a,a+k1);
		sort(b,b+k2);
		printf("%s\n",a[k1-1]>b[k2-1]?"YES":"NO");
	}
	return 0;
}
