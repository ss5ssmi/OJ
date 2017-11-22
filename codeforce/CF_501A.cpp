#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d,m,v;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	m=max(3*a/10,a-(a/250)*c);
	v=max(3*b/10,b-(b/250)*d);
	if(m==v){
		printf("Tie\n");
	}else if(m>v){
		printf("Misha\n");
	}else{
		printf("Vasya\n");
	}
	return 0;
}
