#include<stdio.h>
#include<math.h>

int main() {
	double a;
	scanf("%lf",&a);
	double x=1,nx=(1+a)/2;
	while(fabs(nx-x)>1e-5) {
		x=nx;
		nx=(x+a/x)/2;
	}
	printf("%lf\n",nx);
	return 0;
}