#include<stdio.h>
#include<algorithm>
using namespace std;
int cmp(int a,int b){return a>b;} 
int main(){
	int n,m;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		int s[100001] = {0};
		for(int i=0;i<m;i++){
			scanf("%d",&s[i]);
		}
		sort(s,s+m,cmp);
		int k = s[1]-1,cnt = 0;
		for(int i=2;i<m;i++){
			if(s[i] >= 1) cnt++;
		}
		printf("%d\n",cnt<k?cnt:k);
	}
}
