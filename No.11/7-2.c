#include<stdio.h>
#include<math.h>

double p,q,x1,x2,delta;

void gt0(double a,double b) {
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
}

void eq0(double a,double b) {x1=x2=-b/(2*a);}

void lt0(double a,double b) {
	p=-b/(2*a);
	q=sqrt(-delta)/(2*a);
}

int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta>0) {gt0(a,b);printf("x1=%lf x2=%lf\n",x1,x2);}
	else if(delta==0) {eq0(a,b);printf("x1=x2=%lf\n",x1);}
	else {lt0(a,b);printf("x1=%lf+%lfi x2=%lf-%lfi\n",p,q,p,q);}
	return 0;
}