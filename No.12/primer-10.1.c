#include<stdio.h>

int main() {
	int days[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0; i<12; i++)printf("Month %d has %2d days.\n",i+1,days[i]);
	return 0;
}