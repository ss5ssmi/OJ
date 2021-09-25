#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int x[4], a[6];
	scanf("%d%d%d%d", &x[0], &x[1], &x[2], &x[3]);
	sort(x, x+4);
	a[0] = (x[0]-x[1]+x[2])/2;
	a[1] = (x[0]-x[2]+x[1])/2;
	a[2] = (x[1]-x[0]+x[2])/2;
	a[3] = (x[1]-x[1]+x[0])/2;
	a[4] = (x[2]-x[0]+x[1])/2;
	a[5] = (x[2]-x[1]+x[0])/2;
	sort(a, a+6);
	printf("%d %d %d\n", a[0], a[2], a[4]);
	return 0;
} 
