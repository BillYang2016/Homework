#include<stdio.h>

int main() {
	double h=100,sum=0;
	for(int i=1; i<=10; i++) {
		sum+=h;
		h/=2;
	}
	printf("%lf %lf\n",sum,h);
	return 0;
}