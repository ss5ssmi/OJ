#include<bits/stdc++.h>
using namespace std;
int n;
void print(int s){
	for(int i=0;i<s;i++){
		printf("*");
	}
	for(int i=0;i<n-2*s;i++){
		printf("D");
	}
	for(int i=0;i<s;i++){
		printf("*");
	}
	printf("\n");
}
int main() {
	scanf("%d",&n);
	for(int i=n/2;i>=1;i--){
		print(i);
	}
	for(int i=1;i<=n;i++){
		printf("D");
	}printf("\n");
	for(int i=1;i<=n/2;i++){
		print(i);
	}
	return 0;
}
