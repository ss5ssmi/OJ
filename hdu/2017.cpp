#include<stdio.h>
int main(){
	char c;
	int sum,n,i,j;
	scanf("%d",&n);
	while(n--){
		sum=0;
		getchar();
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
