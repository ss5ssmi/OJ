#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100];
	scanf("%s",s);
	int l=strlen(s),flag=1;
	for(int i=0;i<l && flag;i++){
		if(s[i]=='0' || s[i]=='8'){
			printf("YES\n%c\n",s[i]);
			flag=0;
		}
		for(int j=i+1;j<l && flag;j++){
			int d=(s[i]-'0')*10+(s[j]-'0');
			if(d%8==0){
				printf("YES\n%d\n",d);
				flag=0;
			}
			for(int k=j+1;k<l && flag;k++){
				int t=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
				if(t%8==0){
					printf("YES\n%d\n",t);
					flag=0;
				}
			}
		}
	}
	if(flag) printf("NO\n");
	return 0;
}
