#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x,y,l=0,r=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if(x>0) r++;
		else l++;
	}
	if(l<=1 || r<=1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
