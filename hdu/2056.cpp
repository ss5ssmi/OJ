#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,s;
	while(scanf("%llx%llx",&a,&b)!=EOF){
		s=a+b;
		if(s<0){
			s=abs(a+b);
			printf("-");
		}
		printf("%llX\n",s);
	}
	return 0;
}
