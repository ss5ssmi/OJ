#include<stdio.h>
int main(){
	int l,r;
	scanf("%d%d",&l,&r);
	while(l<=r){
		int s[10] = {0},t = l;
		while(t){
			s[t%10] += 1;
			t/=10;
		}
		bool flag = 1;
		for(int i=0;i<10;i++){
			if(s[i] > 1){
				flag = 0;
				break;
			}
		}
		if(flag){
			printf("%d\n",l);
			return 0; 
		}
		l++;
	}
	printf("-1\n");
	return 0;
}
