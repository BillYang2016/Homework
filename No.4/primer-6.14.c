#include<stdio.h>

int main() {
	int limit;
	double time=0,x=1;
	printf("Enter the number of terms you want:");
	scanf("%d",&limit);
	for(int i=1; i<=limit; i++) {
		time+=1/x;
		printf("time=%lf when terms = %d.\n",time,i);
		x*=2;
	}
	return 0;
}