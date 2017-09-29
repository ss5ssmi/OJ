#include<stdio.h>
int main(){
	int a,b,t,a1,b1;
	while(scanf("%d%d",&a,&b)!=EOF){
		a1 = a;
		b1 = b;
		while (b1 != 0)
		{
			t = b1;
			b1 = a1 % b1;
			a1 = t;
		}
		printf ("%d\n",a*b/a1);
	}
	return 0;
}
