#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,B=0,C=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>=0) B+=a;
		else C+=a;
	}
	printf("%d\n",B-C);
	return 0;
}
