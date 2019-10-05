#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int a[4];
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	sort(a,a+4);
	if((a[0] + a[3] == a[1] + a[2]) || (a[0] + a[1] + a[2] == a[3])){
		printf("YES");
	}else{
		printf("NO");
	}
}
