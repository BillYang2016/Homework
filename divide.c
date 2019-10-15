#include<stdio.h>

int main() {
	float f,c=5.0/9;
	scanf("%f",&f);
	c*=(f-32);
	printf("f:%f\nc:%f\n",f,c);
	return 0;
}