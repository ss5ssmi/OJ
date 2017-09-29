#include<stdio.h>
#include<string.h> 
int main(){
	int t=0;
	char n[100],p[100];
	int s,sh,sl;
	char nh[100],ph[100];
	char nl[100],pl[100];
	scanf("%d",&t);
	sl=101;
	sh=-1;
	for(int i=0;i<t;i++){
		scanf("%s %s %d",n,p,&s);
		if(s>=sh){
			sh=s;
			strcpy(ph,p);
			strcpy(nh,n);
		}
		if(s<=sl){
			sl=s;
			strcpy(pl,p);
			strcpy(nl,n);
		}
	}
	printf("%s %s\n",nh,ph);
	printf("%s %s\n",nl,pl);
	return 0;
}
