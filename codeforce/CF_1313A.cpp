#include<stdio.h>
#include<algorithm>
using namespace std; 
int cal(int f, int s, int t){
	 if(f>=4 && s>=4 && t>=4) return 7;
	 else if(f>=3 && s>=3 && t>=3) return 6;
	 else if(f>=3 && s>=2 && t>=2) return 5;
	 else if(f>=2 && s>=2 && t>=1) return 4;
	 else if((f>=1 && s>=1 && t>=1) || (f>=2 && s>=2 && t>=0)) return 3;
	 else if(f>=1 && s>=1 && t>=0) return 2;
	 else if(f>=1 && s>=0 && t>=0) return 1;
	 else return 0;
}
int main(){
	int t, s[3];
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&s[0], &s[1], &s[2]);
		sort(s,s+3);
		printf("%d\n", cal(s[2], s[1], s[0]));
	}
	return 0;
}
