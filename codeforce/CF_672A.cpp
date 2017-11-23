#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	long long s[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		while(t%2==0 || t%3==0){
			if(t%2==0){
				t/=2;
			}else if(t%3==0){
				t/=3;
			}
		}
		s[i]=t;
	}
	int flag=0;
	for(int i=1;i<n;i++){
		if(s[i]!=s[i-1]){
			flag=1;
			break;
		}
	} 
	printf("%s\n",flag?"NO":"YES");
	return 0;
}
