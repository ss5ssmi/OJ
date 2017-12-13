#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&x);
		int flag=0;
		if(x%3==0 || x%7==0 || x%10==0) {
			flag=1;
		} else {
			while(x>10){
				x-=10;
				if(x%3==0 || x%7==0 || x%10==0){
					flag=1;
					break;
				}
			}
		}
		printf("%s\n",flag?"YES":"NO");
	}
	return 0;
}
