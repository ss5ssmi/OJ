#include<bits/stdc++.h>
using namespace std;
int main() {
	int s[6]={0},sum=0;
	for(int i=0;i<6;i++){
		cin>>s[i];
		sum+=s[i];
	}
	if(sum%2!=0){printf("NO\n"); return 0;}
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=j+1;k<6;k++){
				if((s[i]+s[j]+s[k])==sum/2){
					printf("YES\n");
//					printf("%d %d %d\n",s[i],s[j],s[k]);
					return 0;
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}
