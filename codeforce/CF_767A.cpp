#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000],t[100010]= {0};
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	int tmp=n;
	for(int i=0; i<n; i++) {
		t[s[i]]=1;
		if(s[i]==tmp){
			for(int j=s[i];t[j];j--){
				printf("%d ",j);
				tmp--;
			}
			printf("\n");
		}else{
			printf("\n");
		}
	}
	return 0;
}
