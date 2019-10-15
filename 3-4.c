#include<stdio.h>
#include<math.h>

int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=(a+b+c)/2,area;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%lf\tb=%lf\t%f\narea=%lf\n",a,b,c,area);
	return 0;
}