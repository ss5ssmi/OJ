#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,x,y,sum=0,flag=0;
	set<double> p;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if(x==a){
			flag=1;
		}else{
			p.insert((y-b)*1.0/(x-a));
		}
	}
	sum+=flag;
	sum+=p.size();
	printf("%d\n",sum);
	return 0;
}
