#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	char s[100];
	scanf("%d%d\n",&n,&d);
	int ans=0,tmp=0;
	for(int i=0;i<d;i++){
		gets(s);
		int flag=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0'){
				flag=1;
				break;
			}
		}
		if(flag) tmp++;
		else tmp=0;
		ans=max(ans,tmp);
	}
	printf("%d\n",ans);
	return 0;
}
