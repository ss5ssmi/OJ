#include<bits/stdc++.h>
using namespace std;
int main() {
	int s[10000],l;
	s[0]=0,s[1]=1;
	for(l=2;;l++){
		s[l]=s[l-2]+s[l-1];
		if(s[l]>1e9) break;
	}
	int n;
	cin>>n;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			for(int k=0;k<l;k++){
				if(s[i]+s[j]+s[k]==n){
					printf("%d %d %d\n",s[i],s[j],s[k]);
					return 0;
				}
			}
		}
	}
	printf("I'm too stupid to solve this problem\n");
	return 0;
}
