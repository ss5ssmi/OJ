#include<stdio.h>
int main(){
	long y,n;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%ld%ld",&y,&n);
		while(n){
			if((y%4==0&&y%100!=0)||y%400==0)
				n--;
			y++;
		}
		printf("%d\n",y-1);
	}
	return 0;
}
