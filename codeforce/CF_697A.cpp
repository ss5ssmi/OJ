#include<bits/stdc++.h>
using namespace std;
int main() {
	int s,t,x;
	scanf("%d%d%d",&t,&s,&x);
	int flag=0,tmp=1,ans=s-1;
	if(t==x){
		printf("YES\n");
	}else{
		for(int i=1;i<1000000000;i++){
			if(t+i*s==x || t+i*s+1==x){
				printf("YES\n");
				break;
			}else if(t+i*s>x){
				printf("NO\n");
				break;
			}
		}
	}
//	if(x==t || (x>t && (t-x)%s==0) || (x>t+1 && (x-t-1)%s==0)) printf("YES\n");
//	else printf("NO\n");
	return 0;
}
