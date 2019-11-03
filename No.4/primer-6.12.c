#include<stdio.h>

int main() {
	printf("    n   n cubed\n");
	for(int num=1; num<=6; num++)printf("%5d %5d\n",num,num*num*num);
	return 0;
}