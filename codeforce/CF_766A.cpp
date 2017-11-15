#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[100005],b[100005];
	scanf("%s%s",a,b);
	int la=strlen(a),lb=strlen(b);
	if(strcmp(a,b)==0){
		printf("-1\n");
	}else{
		printf("%d\n",max(la,lb));
	}
	return 0;
}
