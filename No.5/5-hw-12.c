#include<stdio.h>

int main() {
	int x=1;
	for(int i=9; i>=1; i--) {
		x+=1;
		x<<=1;
	}
	printf("%d\n",x);
	return 0;
}