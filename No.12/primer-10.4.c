#include<stdio.h>

int main() {
	int days[]={31,28,31,30,31,30,31,31,30,31};
	for(int i=0; i<sizeof days/sizeof days[0]; i++)printf("Month %2d has %d days.\n",i+1,days[i]);
	return 0;
}