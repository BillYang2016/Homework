#include<stdio.h>

int main() {
	double sum=1;
	int i=1;
	while(1) {
		double mul=1;
		int flag=1;
		for(int j=1; j<=i; j++) {
			double x=1.0*j/(j*2+1);
			mul*=x;
			if(mul<1e-6)flag=0;
		}
		if(!flag)break;
		sum+=mul;
		i++;
	}
	printf("%.6lf\n",sum*2);
	return 0;
}