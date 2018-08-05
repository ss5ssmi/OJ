#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	char w[50];
	cin>>n>>k;
	cin>>w;
	sort(w,w+n);
	int minn = 0,tmp = 0;
	for(int i=0;i<n && k>=1;i++){
		if(w[i] > tmp+1){
			minn+=w[i]-'a'+1;
			tmp = w[i];
			k--;
		}
	}
	if(k>=1){
		printf("-1\n");
	}else{
		printf("%d\n",minn);
	}
	return 0;
}

