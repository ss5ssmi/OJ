#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,r,l,flag=1;
	char s[2000],t[2000];
	cin>>n>>s;
	if(n%2==0) {
		l=n/2-1;
		r=n/2;
	} else {
		l=r=n/2;
	}
	for(int i=0; i<n; i++) {
		if(i%2==0) {
			t[l]=s[i];
			l--;
			if(n%2!=0 && flag){
				r++;
				flag=0;
			}
		} else {
			t[r]=s[i];
			r++;
		}
	}
	if(n%2!=0) reverse(t,t+n);
	for(int i=0;i<n;i++){
		printf("%c",t[i]);
	}
	return 0;
}
