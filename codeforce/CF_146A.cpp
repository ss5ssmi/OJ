#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	char s[50];
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]!='4' && s[i]!='7'){printf("NO\n");return 0;}
	}	
	int sum1=0,sum2=0;
	for(int i=0,j=n/2;i<n/2;i++,j++){
		sum1+=s[i];
		sum2+=s[j];
	}
	if(sum1!=sum2){printf("NO\n");return 0;}
	printf("YES\n");
	return 0;
}
