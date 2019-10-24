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
	int x=i/100000;
	if(x>10)x=10;
	switch(x) {
		case 0:m=i*0.1;break;
		case 1:m=m1+(i-100000)*0.075;break;
		case 2:
		case 3:m=m2+(i-200000)*0.05;break;
		case 4:
		case 5:m=m4+(i-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:m=m6+(i-600000)*0.015;break;
		case 10:m=m10+(i-1000000)*0.01;
	}
	printf("%lf\n",m);
	return 0;
}