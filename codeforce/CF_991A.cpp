#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if((a+b-c)>=n || a<c || b<c){
		printf("-1\n");
	}else{
		printf("%d\n",n-(a+b-c));
	}
	return 0;
}
