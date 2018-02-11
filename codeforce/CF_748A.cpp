#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int x=k%(m*2),y=k/(2*m);
	if(k%(2*m)!=0) y+=1;
	if(x==0) {
		x=m;
	} else {
		if(x%2==0) x/=2;
		else x=(x/2)+1;
	}
	printf("%d %d %c\n",y,x,k%2==0?'R':'L');
	return 0;
}
