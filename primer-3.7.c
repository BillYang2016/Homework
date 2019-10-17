#include<stdio.h>

int main() {
	float aboat=32000;
	double abet=2.14e9;
	long double dip=5.32e-5;
	printf("%f can be written %e\n",aboat,aboat);
	printf("%lf can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);
	return 0;
}