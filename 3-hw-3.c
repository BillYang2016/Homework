#include<stdio.h>
#include<math.h>

int main() {
	double d=300000,p=6000,r=0.01;
	double m=log10(p/(p-d*r))/log10(1+r);
	printf("m=%0.1lf\n",m);
	return 0;
}