#include<stdio.h>
int main(){
	int n, left = 0, right = 0;
	char s[100000];
	scanf("%d",&n);
	scanf("%s",&s);
	for(int i=0;i<n;i++){
		if(s[i] == 'L') left++;
		else right++;
	}
	printf("%d\n",left+right+1);
	return 0;
}
