#include<bits/stdc++.h>
using namespace std;
int pri(int a){
	for(int i=a+1;i<=50;i++){
		int flag=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(!flag) return i;
	}
}
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	if(m==pri(n)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
