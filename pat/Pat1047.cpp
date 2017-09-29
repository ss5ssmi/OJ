#include<stdio.h>
int main(){
	int n,s,t,o,max=-1,mt;
	int team[1001]={0};
	scanf("%d",&n);
	while(n--){
		scanf("%d-%d %d",&t,&o,&s);
		team[t]+=s;
	}
	for(int i=0;i<1001;i++){
		if(team[i]>max){
			max=team[i];
			mt=i;
		}
	}
	printf("%d %d\n",mt,max);
	return 0;
}
