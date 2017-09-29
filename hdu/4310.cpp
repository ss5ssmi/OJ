#include<stdio.h>
#include<algorithm>
using namespace std;
struct hero{
	int h,d;
}s[50];
int cmp(hero a,hero b){
	return a.h*b.d<b.h*a.d;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int td=0;
		for(int i=0;i<n;i++){
			scanf("%d %d",&s[i].d,&s[i].h);
		}
		sort(s,s+n,cmp);
		int cost=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<s[i].h;j++){
				for(int k=i;k<n;k++){
					cost+=s[k].d; 
				}
			}
		} 
		printf("%d\n",cost);
	}
	return 0;
}
