#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct node {
	int l,r,no;
};
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,time=1,l,r;
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>l>>r;
			if(time<=l){
				printf("%d ",l);
				time=l+1;
			}else{
				if(time<=r){
					printf("%d ",time);
					time++;
				}else{
					printf("0 ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
