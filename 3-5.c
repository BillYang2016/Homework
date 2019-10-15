#include<stdio.h>
#include<math.h>

int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double delta=b*b-4*a*c,p=-b/(2*a);
	double q=delta/(2*a);
	printf("x1=%7.2lf\nx2=%7.2lf\n",p-q,p+q);
	return 0;
}