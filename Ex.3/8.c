#include<stdio.h>

void prt(int a[]);

int main() {
	static int a[5]= {2,3,4,5,6};
	for(int i=0; i<5; i++)printf("%d,",a[i]);
	putchar('\n');
	prt(a);
	putchar('\n');
	for(int i=0; i<5; i++)printf("%d,",a[i]);
	putchar('\n');
	return 0;
}

void prt(int m[]) {
	for(int j=0; j<5; j++) {
		m[j]=m[j]+1;
		printf("%d,",m[j]);
	}
}