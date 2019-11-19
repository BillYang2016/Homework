#include<stdio.h>

double f[10005];

double p(int n,int x) {
	if(n==0)return 1;
	if(n==1)return x;
	if(f[n])return f[n];
	f[n-1]=p(n-1,x);
	f[n-2]=p(n-2,x);
	return (2*n-1)*x*f[n-1]-(n-1)*f[n-2]/n;
}

int main() {
	int x,n;
	scanf("%d%d",&n,&x);
	printf("%lf\n",p(n,x));
	return 0;
}