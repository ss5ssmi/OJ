#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n%10==0) {
		printf("%d\n",n);
	}else{
		int l=n-(n%10);
		int h=l+10;
		printf("%d\n",abs(l-n)>=abs(h-n)?h:l);
	}
	return 0;
}
