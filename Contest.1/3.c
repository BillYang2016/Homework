#include<stdio.h>

double P(int n,int x);

int main() {
	int n,x;
	scanf("%d%d",&n,&x);
	printf("%.6lf\n",P(n,x));
	return 0;
}

double P(int n,int x) {
	if(n==0)return 1;
	else if(n==1)return x;
	else return ((2*n-1)*x-P(n-1,x)-(n-1)*P(n-2,x))/n;
}