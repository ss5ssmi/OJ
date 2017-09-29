#include<cstdio>
#include<algorithm>
using namespace std;
int s[1000010];
int main(){
	int n,x,t;
	while(scanf("%d",&n)!=EOF&&n){
		for(int i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		sort(s,s+n);
		for(int i=1;i<n;i++){
			if(s[i-1]!=s[i]&&s[i]!=s[i+1]){
				printf("%d\n",s[i]);
				break;
			}
		}
	}
	return 0;
}
