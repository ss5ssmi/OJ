#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int s,c[4],a,b;
	int i=3;
	while(scanf("%d",&s)!=EOF){
		if(s==6174){
			printf("7641 - 1467 = 6174\n");
		}
		while(s!=6174){
			for(int i=0;i<4;i++){
			c[i]=s%10;
			s/=10;
			}
			sort(c,c+4);
			a=c[0]*1000+c[1]*100+c[2]*10+c[3];
			b=c[3]*1000+c[2]*100+c[1]*10+c[0];
			if(a==b){
				printf("%04d - %04d = 0000\n",b,a);
				break; 
			}
			s=b-a;
			printf("%04d - %04d = %04d\n",b,a,s);
		}
	}
	return 0;
}
