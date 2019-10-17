#include<stdio.h>
#include<math.h>

int main() {
	double cash=1000;
	double fst=cash*(1+5*0.03);
	double snd=(cash*(1+2*0.021)*(1+3*0.0275));
	double trd=(cash*(1+3*0.0275)*(1+2*0.021));
	double foth=cash*pow(1+0.015,5);
	double fith=cash*pow(1+0.0035/4,4*5);
	printf("first way:%lf\nsecond way:%lf\nthird way:%lf\nfourth way:%lf\nfifth way:%lf\n",fst,snd,trd,foth,fith);
	return 0;
}