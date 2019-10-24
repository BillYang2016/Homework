#include<stdio.h>

#define m1 100000*0.1
#define m2 m1+100000*0.075
#define m4 m2+100000*0.05
#define m6 m4+100000*0.03
#define m10 m6+400000*0.015

int main() {
	int i;
	double m;
	scanf("%d",&i);
	if(i<=100000)m=i*0.1;
	else if(i<=200000)m=m1+(i-100000)*0.075;
	else if(i<=400000)m=m2+(i-200000)*0.05;
	else if(i<=600000)m=m4+(i-400000)*0.03;
	else if(i<=1000000)m=m6+(i-600000)*0.015;
	else m=m10+(i-1000000)*0.01;
	printf("%lf\n",m);
	return 0;
}