#include<stdio.h>
#include<math.h>

const double pii=acos(-1);
double r,h;

int main() {
	scanf("%lf%lf",&r,&h);
	printf("圆周长：%.2lf\n",2*pii*r);
	printf("圆面积：%.2lf\n",pii*r*r);
	printf("球表面积：%.2lf\n",4*pii*r*r);
	printf("球体积：%.2lf\n",4.0/3*pii*r*r*r);
	printf("圆柱体积：%.2lf\n",pii*r*r*h);
	return 0;
}