#include<stdio.h>

#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20971
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+(RATE2*(BREAK2-BREAK1)))

int main() {
	double kwh,bill;
	puts("Please enter the kwh used.");
	scanf("%lf",&kwh);
	if(kwh<=BREAK1)bill=RATE1*kwh;
	else if(kwh<=BREAK2)bill=BASE1+(RATE2*(kwh-BREAK1));
	else bill=BASE2+(RATE3*(kwh-BREAK2));
	printf("The charge for %.1lf kwh is $%1.2lf.\n",kwh,bill);
	return 0;
}