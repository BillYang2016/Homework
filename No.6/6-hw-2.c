#include<stdio.h>

int a[15];

int main() {
	for(int i=1; i<=10; i++)scanf("%d",&a[i]);
	for(int i=1; i<=10; i++) {
		int Min=i;
		for(int j=i+1; j<=10; j++)
			if(a[Min]>a[j]) {
				Min=j;
				int tmp=a[i];
				a[i]=a[Min];
				a[Min]=tmp;
			}
	}
	for(int i=1; i<=10; i++)printf("%d ",a[i]);
	putchar('\n');
	return 0;
}