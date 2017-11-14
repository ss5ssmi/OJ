#include<bits/stdc++.h>
using namespace std;
int main() {
	int s,v1,v2,t1,t2;
	scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);
	int a=(t1*2)+(s*v1),b=(t2*2)+(s*v2);
	if(a<b) {
		printf("First\n");
	} else if(a==b) {
		printf("Friendship\n");
	} else {
		printf("Second\n");
	}
	return 0;
}
