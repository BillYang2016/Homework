#include<stdio.h>

int main() {
	double a=1,b=1;
	double sum=0;
	for(int i=1; i<=20; i++) {
		double c=a+b;
		sum+=c/b;
		a=b;
		b=c;
	}
	printf("%lf\n",sum);
	return 0;
}