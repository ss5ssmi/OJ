#include<stdio.h>
bool check(int n){
	int s[10]={0};
	while(n){
		s[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(s[i]>1) return false;
	}
	return true;
}
int main(){
	int year;
	while(scanf("%d",&year)!=EOF){
		for(int i=year+1;;i++){
			if(check(i)){
				printf("%d\n",i);
				break;
			}
		} 
	}
	return 0;
}
