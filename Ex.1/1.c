#include<stdio.h>
#include<math.h>

int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double delta=b*b-4*a*c;
	if(delta<0)puts("no solution!");
	else if(delta<=1e-5) {
		double x=-b/(2*a);
		printf("x=%lf\n",x);
	} else {
		double x1=(-b+sqrt(delta))/(2*a),x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%lf x2=%lf\n",x1,x2);
	}
	return 0;
}