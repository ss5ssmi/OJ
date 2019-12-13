#include<stdio.h>
int ab(int a,int b){return a>b?a-b:b-a;}
int main(){
	int q,a,b,c;
	scanf("%d",&q);
	while(q--){
		scanf("%d %d %d",&a,&b,&c);
		int dis = ab(a,b) + ab(a,c) + ab(b,c);
		dis-=4;
		printf("%d\n",dis<0?0:dis);
	}
}
