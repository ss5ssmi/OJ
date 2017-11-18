#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main() {
	int tmp,n,m,ans,s[100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		if(tmp%m!=0){
			s[i]=(tmp/m)+1;
		}else{
			s[i]=tmp/m;
		}
	}
	tmp=s[0];
	for(int i=0;i<n;i++){
		if(tmp<=s[i]){
			ans=i+1;
			tmp=s[i];
		} 
	}
	printf("%d\n",ans);
	return 0;
}
