#include<stdio.h>
#include<string.h>
#define maxn 85
const double m[]={12.01,1.008,16.00,14.01};
double cal(const char* s)
{
	int C=0,H=0,N=0,O=0;
	int n=strlen(s);
	double ans=0.0;
	for(int i=0;i<n;i++){
		if(s[i+1]>='0' && s[i+1]<='9'){
			int t=0;
			for(int j=i+1;s[j]<='9' && s[j]>='0';j++){
				t=t*10+s[j]-'0';
			}
			if(s[i]=='C') C+=t;			
			if(s[i]=='H') H+=t;
			if(s[i]=='N') N+=t;
			if(s[i]=='O') O+=t;
		}else{
			if(s[i]=='C') C++;			
			if(s[i]=='H') H++;
			if(s[i]=='N') N++;
			if(s[i]=='O') O++;
		}
	}
	ans=C*m[0]+H*m[1]+O*m[2]+N*m[3]; 
	return ans;
}
int main()
{
	int t;
	char s[maxn];
	scanf("%d",&t);
	while(t--) {
		scanf("%s",&s);
		printf("%.3lf\n",cal(s));
	}
	return 0;
}
