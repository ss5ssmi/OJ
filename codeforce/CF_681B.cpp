#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a=1234567,b=123456,c=1234;
	cin>>n;
	for(int i=0;;i++){
		if(i*a>n) break;
		for(int j=0;;j++){
			if(i*a+j*b>n) break;
			for(int k=0;;k++){
				if((n-(i*a)-(j*b))%c!=0) break;
				if(i*a+j*b+k*c==n) {printf("YES\n"); return 0;} 
			}
		}
	}
	printf("NO\n");
	return 0;
}
