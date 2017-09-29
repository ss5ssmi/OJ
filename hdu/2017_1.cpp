#include<stdio.h>
int main(){
	char c,enter;
	int sum,n,i,j;
	scanf("%d%c",&n,&enter);
	while(n--){
		sum=0;
		while(scanf("%c",&c)!=EOF)
		if(c=='\n'){
			break;
		}else if(c>='0'&&c<='9'){
			sum++;
		}
		printf("%d\n",sum);
	}

	return 0;
}
