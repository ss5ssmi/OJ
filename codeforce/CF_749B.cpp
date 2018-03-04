#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
};
int main() {
	node s[100],a,b,c;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	cin>>c.x>>c.y;
	printf("3\n");
	printf("%d %d\n",a.x-b.x+c.x,a.y-b.y+c.y);
	printf("%d %d\n",b.x-c.x+a.x,b.y-c.y+a.y);
	printf("%d %d\n",c.x-a.x+b.x,c.y-a.y+b.y);
	return 0;
}
