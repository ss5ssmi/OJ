#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	double s[6]={0.0,500.0,1000.0,1500.0,2000.0,2500.0};
	int m[6],w[6],su,un;
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&m[1],&m[2],&m[3],&m[4],&m[5],&w[1],&w[2],&w[3],&w[4],&w[5],&su,&un);
	double sou=0;
	for(int i=1;i<=5;i++){
		sou+=max(0.3*s[i],((1-(m[i]/250.0))*s[i])-(w[i]*50.0));
	} 
	sou+=su*100.0;
	sou-=un*50.0;
	printf("%.0lf\n",sou);
	return 0;
}
