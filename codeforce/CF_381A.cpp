#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]); 
	} 
	int flag=1,se=0,di=0;
	int i=0,j=n-1,t=0;
	while(t!=n){
		if(flag){
			if(s[i]>s[j]){
				se+=s[i];
				i++;
			}else{
				se+=s[j];
				j--;
			}
			flag=0;
		}else{
			if(s[i]>s[j]){
				di+=s[i];
				i++;
			}else{
				di+=s[j];
				j--;
			}
			flag=1;
		}
		t++;
	}
	printf("%d %d\n",se,di);
	return 0;
}
