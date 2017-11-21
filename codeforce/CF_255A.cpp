#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,s[3]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		s[i%3]+=t;
	} 
	int max=-1,tmp;
	for(int i=0;i<3;i++){
		if(s[i]>max){
			max=s[i];
			tmp=i;
		}
	}
	switch(tmp){
		case 0: printf("chest\n");break;
		case 1: printf("biceps\n");break;
		case 2: printf("back\n");break;
	}		
	return 0;
}
