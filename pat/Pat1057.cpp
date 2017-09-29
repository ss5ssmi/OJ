#include<stdio.h>
#include<string.h>
int main(){
	char s[100000];
	int i,l,sum=0,t[10000]={0};
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z'){
			sum+=s[i]-'A'+1;
		}else if(s[i]>='a'&&s[i]<='z'){
			sum+=s[i]-'a'+1;
		}
	}
	l=0;
	while(sum){
		t[l++]=sum%2;
		sum/=2;
	}
	int s0=0,s1=0;
	for(i=0;i<l;i++){
		if(t[i]==1){
			s1++;
		}else if(t[i]==0){
			s0++;
		} 
	}
	printf("%d %d\n",s0,s1);
	return 0;
}
