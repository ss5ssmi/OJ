#include<stdio.h>
int main(){
	char x;
	int f,y,t,i,s;
	scanf("%d",&t);
	while(t--){
		f=s=0;
		getchar();
		scanf("%c%d",&x,&y);
		for(i=0;i<26;i++){
			if(x==(65+i)){
				f=1+i;
				break;
			}
		}
		for(i=0;i<26;i++){
			if(x==(97+i)){
				f=-1-i;
				break;
			}
		}
		printf("%d\n",f+y);
	}
	return 0;
}
