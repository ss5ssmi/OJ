#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(!a && !b){
		printf("NO\n");
		return 0;
	}
	if(abs(a-b)>1) printf("NO\n");
	else printf("YES\n");	
	return 0;
}
