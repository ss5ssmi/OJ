#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	long long ans=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		ans+=(m+i)/5-i/5; //m+i�����5�ı����ĸ��� 
	}
	printf("%lld\n",ans);
	return 0;
}
