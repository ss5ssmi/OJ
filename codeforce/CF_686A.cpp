#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,sum,t,c=0;
	char s;
	scanf("%d%d",&n,&sum);
	while(n--) {
		getchar();
		scanf("%c %d",&s,&t);
		if(s=='-') {
			if(t>sum) {
				c++;
			} else {
				sum-=t;
			}
		} else {
			sum+=t;
		}
	}
	printf("%d %d\n",sum,c);
	return 0;
}
