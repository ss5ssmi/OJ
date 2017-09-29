#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int a,b;
}s[101];
int cmp(node a,node b){
	return a.a<b.a;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)	{
		for(int i=1;i<=n;i++){
			scanf("%d",&s[i].a);
			s[i].b=i;
		} 
		sort(s+1,s+n+1,cmp);
		for(int i=1;i<=n;i++){
			printf("%d",s[i].b);
			if(i!=n) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
