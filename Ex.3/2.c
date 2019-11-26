#include<stdio.h>

void transfer(int m) {
	int aa[20],j;
	for(j=0; m!=0; j++) {
		aa[j]=m%2;
		m=m/2;
	}
	for(; j!=0; j--)printf("%d",aa[j-1]);
}

int main() {
	int n;
	scanf("%d",&n);
	transfer(n);
	return 0;
}