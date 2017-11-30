#include<bits/stdc++.h>
using namespace std;
int sum1=0,sum2=0,t,ans=0,tmp=0;
void dfs(int sum,int flag) {
//	printf("sum=%d flag=%d\n",sum,flag);
	if(flag==t) {
		if(sum==sum1) {
			tmp++;
			ans++;
//			printf("ans_%d = %d\n",ans,sum);
			return ;
		} else {
			tmp++;
			return ;
		}
	}
	dfs(sum+1,flag+1);
	dfs(sum-1,flag+1);

}
int main() {
	char s1[100],s2[100];
	scanf("%s\n%s",s1,s2);
	for(int i=0; i<strlen(s1); i++) {
		if(s1[i]=='+') sum1++;
		else sum1--;
	}
	for(int i=0; i<strlen(s2); i++) {
		if(s2[i]=='+') sum2++;
		else if(s2[i]=='-') sum2--;
		else t++;
	}
	dfs(sum2,0);
//	printf("%d %d\n",ans,tmp);
	printf("%.12lf\n",ans*1.0/tmp);
	return 0;
}
