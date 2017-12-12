#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int t=1;
	while(a>=0&&b>=0){
		if(t%2!=0) a-=t;
		else b-=t;
		if(a<0){
			printf("Vladik\n");
			break;
		}
		if(b<0){
			printf("Valera\n");
			break;
		}
		t++;
	}
	return 0;
}
