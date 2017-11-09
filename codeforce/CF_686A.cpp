#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,c=0;
	long long sum,t;
	char s;
	scanf("%d%lld",&n,&sum);
	while(n--) {
		getchar();
		scanf("%c %lld",&s,&t);
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
	printf("%lld %d\n",sum,c);
	return 0;
}
