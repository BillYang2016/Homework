#include<stdio.h>

#define N 10

double diff(double *a);

int main() {
	double a[N];
	for(int i=0; i<N; i++)scanf("%lf",&a[i]);
	printf("%.2lf\n",diff(a));
	return 0;
}

double diff(double *a) {
	double Max=*a,Min=*a,*f=a;
	while(a<f+N) {
		if(*a>Max)Max=*a;
		if(*a<Min)Min=*a;
		a++;
	}
	return Max-Min;
}