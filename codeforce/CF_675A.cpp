#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(c==0){
		if(a==b) printf("YES\n"); 
		else printf("NO\n");
	}else{
		if((a>b && c>0) || (a<b && c<0)){
			printf("NO\n");
		}else{
			if(abs(a-b)%c==0) printf("YES\n");
			else printf("NO\n");
		} 
	}
	return 0;
}
