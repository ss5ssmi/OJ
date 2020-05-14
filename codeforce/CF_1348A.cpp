#include<stdio.h>
int main(){
	int t, s[30] = {0};
	scanf("%d", &t);
	s[2] = 2;
	for(int i=4;i<=30;i++){
		if(i%2==0) s[i] = (2*(s[i-2])) + 2; 
	}
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", s[n]);
	}
	return 0;
}
