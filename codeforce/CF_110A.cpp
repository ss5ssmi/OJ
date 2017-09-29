#include<stdio.h>
#include<string.h>
int main() {
	char num[20];
	while(scanf("%s",&num)!=EOF) {
		int sum=0;
		for(int i=0;i<strlen(num);i++){
			if(num[i]=='4' || num[i]=='7'){
				sum++;
			}
		}
		int flag=1;
		if(sum==0){
			flag=0;
		}
		while(sum){
			if(sum%10!=4 && sum%10!=7){
				flag=0;
				break;
			}
			sum/=10;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
