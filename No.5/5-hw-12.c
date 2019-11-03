#include<stdio.h>

int main() {
	int x=1;
	for(int i=10; i>=1; i--) {
		x+=1;
		x<<=1;
	}
	printf("%d\n",x);
	return 0;
}