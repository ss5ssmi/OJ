#include<stdio.h>
int main(){
	int n,m,sum=0;
	int s[100]={0};
	int p[100]={0};
	int stu[100]={0};
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&p[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&stu[j]);
			if(stu[j]==p[j]){
				sum+=s[j];
			}
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
