#include<stdio.h>
int main(){
	long long a,b,s;
	while(scanf("%llX%llX",&a,&b)!=EOF){
		s=a+b;
		if(s>=0){
			printf("%llX\n",s);
		}else{
			printf("-%llX\n",-s);
		}
	}
	return 0;
}
