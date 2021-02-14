#include<stdio.h>
int n, k;
char s[200000];
bool isEmpty(int t){
	for(int i=0;i<k;i++){
		printf("%d\n", i);
		if(t-i>=0 && s[t-i]) return 0;
		if(t+i<n && s[t+i]) return 0;		
	} 
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int cnt = 0;
		scanf("%d%d", &n, &k);
		scanf("%s", &s);
		for(int i=0;i<n;i++){
			if(isEmpty(i)){
				s[i] = 1;
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
