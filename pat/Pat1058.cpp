#include<stdio.h>
#include<string.h>
typedef struct timu{
	int m;
	int x;
	int z;
	char d[10];
}tm;
int main(){
	int n,m;
	tm timu[100];
	int stu[1000];
	int t;
	char xuan[10];
	
	scanf("%d %d",&n,&m);	
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&timu[i].m,&timu[i].x,&timu[i].z);
		getchar();
		gets(timu[i].d);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("(%d %s)",&t,&xuan);
		}
	}
	
	return 0;
}
