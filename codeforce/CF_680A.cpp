#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,s[101]={0},sum=0;
	for(int i=0;i<5;i++){
		scanf("%d",&t);
		s[t]++;
		sum+=t;
	}
	int tmp=0;
	for(int i=1;i<=100;i++){
		if(s[i]==2) tmp=max(tmp,i*2);
		else if(s[i]>=3) tmp=max(tmp,i*3);
	}
	printf("%d\n",sum-tmp);
	return 0;
}
