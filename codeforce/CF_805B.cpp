#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,tmp=0,flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(!flag) printf("b");
		else printf("a");
		tmp++;
		if(tmp==2){
			tmp=0;
			flag^=1;
		}
	}
	return 0;
}
