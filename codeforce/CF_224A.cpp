#include<bits/stdc++.h>
using namespace std;
int main() {
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a,b,c;
	a=sqrt((s1*s2)/s3);
	b=sqrt((s1*s3)/s2);
	c=sqrt((s2*s3)/s1);
	printf("%d\n",(a+b+c)*4);
	return 0;
}
