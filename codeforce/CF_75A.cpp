#include<bits/stdc++.h>
using namespace std;
int fun(int t) {
	int s[10],n=0,tmp=0;
	while(t){
		s[n++]=t%10;
		t/=10;
	} 
	for(int i=n-1;i>=0;i--){
		if(s[i]) tmp=tmp*10+s[i];
	}
	return tmp;
}
int main() {
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	int aa=fun(a);
	int bb=fun(b);
	int cc=fun(c);
	if(aa+bb==cc) printf("YES\n");
	else printf("NO\n");
	return 0;
}
